// gcc/test_prune_cloned_functions.cc

#include <cassert>
#include <cstring>
#include "gcc-interface.h"

// Mock cgraph_node for testing purposes
struct mock_cgraph_node {
    const char* name;
    tree decl;
    bool removed;

    // Mock remove() function
    void remove() {
        removed = true;
    }
};

// Hardcoded list of functions to prune for testing purposes
const char* functions_to_prune[] = {
    "clone_func_x86_1",
    "clone_func_x86_2",
    "clone_func_aarch64_1"
};

// Function to create a mock cgraph_node
static mock_cgraph_node create_mock_cgraph_node(const char* function_name) {
    mock_cgraph_node node;
    node.name = function_name;
    node.decl = build_function_decl();
    node.removed = false;
    return node;
}

// Function to test prune_cloned_functions()
void test_prune_cloned_functions() {
    mock_cgraph_node nodes[] = {
        create_mock_cgraph_node("clone_func_x86_1"),
        create_mock_cgraph_node("clone_func_x86_2"),
        create_mock_cgraph_node("clone_func_aarch64_1")
    };

    // Simulate the call to prune_cloned_functions() with mock nodes
    const char* prune_list[] = {
        "clone_func_x86_1",
        "clone_func_x86_2",
        "clone_func_aarch64_1",
        nullptr
    };
    prune_cloned_functions(prune_list);

    // Verify that nodes listed in functions_to_prune are removed
    for (auto& node : nodes) {
        bool should_be_pruned = false;
        for (int i = 0; prune_list[i] != nullptr; ++i) {
            if (strcmp(node.name, prune_list[i]) == 0) {
                should_be_pruned = true;
                break;
            }
        }
        assert(should_be_pruned == node.removed);
    }
}

// Main function to run the test cases
int main() {
    test_prune_cloned_functions();

    return 0;
}

