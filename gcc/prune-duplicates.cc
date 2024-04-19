/*
  This module is primarily dependent on the following data structure:
  https://github.com/gcc-mirror/gcc/blob/f438acf7ce2e6cb862cf62f2543c36639e2af233/gcc/cgraph.h

  Discovery blog:
  https://kpunno7.wordpress.com/

  What remains of the implementation:
    - Traverse function versions effectively using the examples
    - Establish a working comparison of whether functions have received different optimizations
    - Establish a macro or custom function that can prune symbols from symbol table and/or nodes from call graph
    - Better function names / organization
*/
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "rtl.h"
#include "tree.h"
#include "gimple.h"
#include "tree-pass.h"
#include "ssa.h"
#include "expmed.h"
#include "optabs-tree.h"
#include "tree-eh.h"
#include "gimple-iterator.h"
#include "gimplify-me.h"
#include "gimplify.h"
#include "tree-cfg.h"
#include "bitmap.h"
#include "tree-ssa-dce.h"
#include "memmodel.h"
#include "optabs.h"
#include "gimple-fold.h"
#include "internal-fn.h"
#include "cgraph.h"

/*
  Check if this function is the "default" version
  If the function version info
  a) is NULL
  b) has a predecessor
  It is not a default function

  May not be needed as we can do:  node->simd_clones;
*/
bool
is_default_function(cgraph_node *node) 
{
  /* Get function version info */
  cgraph_function_version_info *fvi = node->function_version ();

  /* No function version info OR function has a predecessor? */
  if (fvi == NULL || fvi->prev)
    return false;
  /* Is "default" */ 
  return true;
}

/*
  Traverse function versions of this node.
  If a clone is found to be virtually identical,
  delete it.
*/
unsigned int 
prune_duplicates(cgraph_node *node) {
  /* Count pruned (must be done somewhere for diagnostics) */
  static unsigned count = 0;
  /* Constant FVI for "default" */
  const cgraph_function_version_info *default_fvi = node->function_version();
  /* 
   Current FVI, initialized to "default",
   accessed by first clone in loop, if exists
  */
  cgraph_function_version_info *curr_fvi = node->function_version();
  // While this function version has clones
  
  while (curr_fvi->next)
    {
      /* Get next version after default */
      curr_fvi = curr_fvi->next;
      
      /* Check if any clones are duplicates 
           ...
           If (curr_fvi->this_node->some_marker_of_state 
               == default_fvi->this_node->some_marker_of_state)
           ...
      */
      if (default_fvi) { /* Compare this with curr_fvi somehow */ }

      /* Can access the symbol associated with the current function */
      cgraph_node::delete_function_version_by_decl(curr_fvi->this_node->decl) ;
      /* 
       If they are; do {a || b}, 
         a) Delete function version
         ** Requires a tree for associated function declaration (?)
         cgraph_node::delete_function_version(tree decl);
       OR
         b) Remove function from the symbol table, perhaps more direct
         node->remove();
      */
      /* If not, keep them, do nothing */
  }
  return count;
}

/*
  ** Should be renamed **

  For each function in the call graph,
  Check if this is a "default" version
  If it is, prune its clones that are virtually identical
*/
static unsigned int 
get_function_defaults() 
{
  /* Acquire a node from the call graph */
  struct cgraph_node *node;

  /* 
    https://github.com/gcc-mirror/gcc/blob/9451b6c0a941dc44ca6f14ff8565d74fe56cca59/gcc/cgraph.h#L3074
    Walk all functions 
    Will begin with first function in symbol table
  */
  FOR_EACH_FUNCTION (node)
  /* 
   Is this the "default" function version? 
   ** Can alternatively (more reliably?) be done by:
        node->simd_clones != NULL;
   ** points to the first node if this function has SIMD clones
  */
    if (node->simd_clones)
      prune_duplicates(node); /* Prune duplicates if so */
  /* 
   Don't do this, 
   Instead, return the count of prune functions to be dumped 
  */
  return 0;
}

/* anon namespace */
namespace 
{

const pass_data pass_data_prune_duplicates =
{
   GIMPLE_PASS,       // type
  "prune_duplicates", // name
  OPTGROUP_NONE,      // optinfo _flags
  TV_NONE,            // tv_id
  0,                  // properties_required 
  0,                  // properties_provided
  0,                  // properties_destroyed
  0,                  // todo flags start
  0                   // todo flags finish
};

class pass_prune_duplicates : public gimple_opt_pass 
{
public:
  pass_prune_duplicates (gcc::context *ctxt)
  : gimple_opt_pass (pass_data_prune_duplicates, ctxt)
  {}

  unsigned int execute (function *) final override
  {
    return get_function_defaults();
  }

}; // class pass_prune_duplicates

} // anon namespace

gimple_opt_pass *make_pass_prune_duplicates (gcc::context *ctxt)
{
  return new pass_prune_duplicates (ctxt);
}