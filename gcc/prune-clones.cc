#include <cstdint>
#include "profile-count.h"
#include "ipa-ref.h"
#include "ipa-param-manipulation.h"
#include "cgraph.h"
#include "gcc-plugin.h"
#include "plugin-version.h"
#include "tree-pass.h"
#include "context.h"
#include "prune-clones.h"

unsigned int prune_clones(cgraph_node *node);

// Constructor definition for pass_prune_clones
pass_prune_clones::pass_prune_clones(gcc::context *ctxt)
    : gimple_opt_pass(pass_data_prune_clones, ctxt) {}

unsigned int pass_prune_clones::execute(function *fun) {
    for (cgraph_node *node = cgraph_nodes; node; node = node->next) {
        if (node->simd_clone) {
            printf("Found SIMD clones for function: %s\n", cgraph_node_name(node));
            prune_clones(node);
        }
    }
    return 0;
}

namespace {
// Define the pass data structure
const pass_data pass_data_prune_clones = {
    GIMPLE_PASS,         // type
    "prune_clones",	 // name
    OPTGROUP_NONE,	 // optinfo_flags
    TV_NONE,             // tv_id
    PROP_gimple_any,     // PROP_gimple
    0,                   // properties_provided
    0,                   // properties_destroyed
    0,                   // todo_flags_start
    0                    // todo_flags_finish
};

gimple_opt_pass *make_pass_prune_clones(gcc::context *ctxt) {
    return new pass_prune_clones(ctxt);
}
} // namespace

// Function to prune duplicate clones
unsigned int prune_clones(cgraph_node *node) {
    printf("Pruning clones for function: %s\n", cgraph_node_name(node));
    cgraph_function_version_info *default_fvi = node->function_version();
    cgraph_function_version_info *curr_fvi = node->function_version();
    cgraph_function_version_info *prev_fvi = nullptr;

    while (curr_fvi->next) {
        prev_fvi = curr_fvi;
        // Get the next clone
        curr_fvi = curr_fvi->next;
        // Compare to the default node
        // Prune if duplicate
        if(curr_fvi->clone_of == default_fvi->clone_of) {
            printf("Removing duplicate clone: %s\n", cgraph_node_name(curr_fvi->clone_of));
            prev_fvi->next = curr_fvi->next;
            delete curr_fvi;
        }
    }

    return 0;
}
