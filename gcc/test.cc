#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "tree-pass.h"
#include "gimple.h"

namespace {
  const pass_data pass_data_gimple_test = {
    GIMPLE_PASS,
    /* type */
    "test",
    /* name */
    OPTGROUP_NONE,
    /* optinfo_flags */
    TV_NONE,
    /* tv_id */
    0,
    /* properties_required */
    0,
    /* properties_provided */
    0,
    /* properties_destroyed */
    0,
    /* todo_flags_start */
    0 /* todo_flags_finish */
  };

  /* Test pass for dumping a test message. */
  class pass_test_dump: public gimple_opt_pass {
    public: pass_test_dump(gcc::context * ctxt): gimple_opt_pass(pass_data_gimple_test, ctxt) {}

    /* Pass gate function. */
    bool
    gate(function*) final override {
      return true;
    }

    /* Pass execution function. */
    unsigned int
    execute(function*) final override {
      fprintf(stderr, "Hello World\n");
      return 0;
    }
  };
}

/* Create the test dump pass. */
gimple_opt_pass
*make_pass_test_dump(gcc::context * ctxt) {
  return new pass_test_dump(ctxt);
}
