#ifndef PRUNE_CLONES_H
#define PRUNE_CLONES_H

#include "context.h"
#include "tree-pass.h"
#include "cgraph.h"

class pass_prune_clones : public gimaple_opt_pass {
public:
    pass_prune_clones(gcc::context *ctxt);

    unsigned int execute(function *fun) final override;
};

gimple_opt_pass *make_pass_prune_clones(gcc::context *ctxt);
unsigned int prune_clones(cgraph_node *node);

#endif // PRUNE_CLONES_H

