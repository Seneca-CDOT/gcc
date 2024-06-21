#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "rtl.h"
#include "tree.h"
#include "gimple.h"
#include "tree-pass.h"
#include "expmed.h"
#include "gimple-iterator.h"
#include "memmodel.h"
#include "internal-fn.h"
#include "cgraph.h"
#include "tests.h"
#include <functional>

// Define the prune list globally or pass it as needed
std::vector<std::string> prune_list = {"function1", "function2"};
static bool already_run = false;

/**
 * Method to determine if a function should be pruned.
 *
 * @param function_name The name of the function to check.
 * @return True if the function should be pruned, false otherwise.
 */
bool should_prune(const std::string &function_name) {
    return std::find(prune_list.begin(), prune_list.end(), function_name) != prune_list.end();
}

/**
 * Method to print the state of a cgraph_node.
 *
 * @param prefix A string prefix to print before the node state.
 * @param node The cgraph_node whose state is to be printed.
 */
void print_node_state(const char* prefix, cgraph_node *node) {
    printf("%s - Function version: %p, Decl: %p\n", prefix, (void*)node->function_version(), (void*)node->decl);
}

/**
 * Method to prune cloned functions based on a prune list.
 *
 * @param node The cgraph_node to start pruning from.
 */
void prune_cloned_functions(cgraph_node *node) {
    // Lambda function to be used as a callback for `call_for_symbol_and_aliases`
    auto callback = [](cgraph_node* node, void*) -> bool {
        const char* name = IDENTIFIER_POINTER(DECL_NAME(node->decl));
        printf("***** 4. Current function: %s\n", name);

        // If the current function matches the name in the prune list
        if (should_prune(name)) {
            printf("***** 5. Removing function... \n");

            if (cgraph_node::get(node->decl)) {
                cgraph_node::delete_function_version_by_decl(node->decl);
            } else {
                // For this test only, if node is not recognized by the cgraph, delete the pointer instead
                node->decl = nullptr;
                printf("***** 5.5 For testing only: node not recognized by cgraph, delete the pointer instead\n");
            }
            printf("***** 6. Completed pruning %s\n", name);

            return true; // Stop iteration after pruning this node
        }
        return false; // Continue iteration if not pruned
    };

    // Traverse the node and its aliases/clones
    node->call_for_symbol_and_aliases(callback, nullptr, true);
}

/**
 * Purpose: Test the prune_cloned_functions function.
 * Create a mock cgraph_node, insert a new function version, assign declarations, and then prune the function if it matches the prune list.
 */
void test_prune_cloned_functions() {
    printf("***** 1. Running test for prune_cloned_functions.\n");

    // Create a mock cgraph_node instance and insert a new version
    cgraph_node *node = new cgraph_node(1);
    node->insert_new_function_version();

    // Assign declarations
    node->decl = build_fn_decl("function1", NULL_TREE);

    // Ensure declaration is assigned
    if (!node->decl) {
        printf("***** 2. Failed to create function declaration.\n");
        delete node;
        return;
    } else {
        printf("***** 2. Successfully created mock function node.\n");
    }

    // Show node state before pruning
    print_node_state("***** 3. Before removal - mock node", node);

    // Test pruning
    prune_cloned_functions(node);

    // Show node state after pruning
    print_node_state("***** 7. After removal - mock node", node);

    // Clean up
    delete node;

    already_run = true;
}

/* anon namespace */
namespace {

const pass_data pass_data_prune_cloned_functions = {
    GIMPLE_PASS,       // type
    "prune_cloned_functions", // name
    OPTGROUP_NONE,      // optinfo _flags
    TV_NONE,            // tv_id
    0,                  // properties_required
    0,                  // properties_provided
    0,                  // properties_destroyed
    0,                  // todo flags start
    0                   // todo flags finish
};

/**
 * Purpose: Define a pass to prune cloned functions within the GCC compilation process.
 * Extend gimple_opt_pass and override the execute function to iterate through each function in the call graph and prune function versions based on the provided prune list.
 */
class pass_prune_cloned_functions : public gimple_opt_pass {
public:
    pass_prune_cloned_functions(gcc::context *ctxt)
        : gimple_opt_pass(pass_data_prune_cloned_functions, ctxt) {}

    unsigned int execute(function *) final override {
        struct cgraph_node *node;

        if (already_run) {
            return 0;
        }

        // Iterate through each function in the call graph
        FOR_EACH_FUNCTION(node) {

            // Prune function versions based on the provided prune list
            prune_cloned_functions(node);
        }

        already_run = true;

        return 0;
    }
};

} // anon namespace

/**
 * Purpose: Create an instance of the pass_prune_cloned_functions class.
 *
 * @param ctxt The GCC context.
 * @return A pointer to the newly created gimple_opt_pass object.
 */
gimple_opt_pass *make_pass_prune_cloned_functions(gcc::context *ctxt) {
    return new pass_prune_cloned_functions(ctxt);
}
