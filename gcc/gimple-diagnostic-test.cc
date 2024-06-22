#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "tree-pass.h"
#include "gimple.h"
#include "rtl.h"
#include "tree.h"


namespace {

	const pass_data pass_data_gimple_diagnostic_test = 
	{
		GIMPLE_PASS,
		"diagnostic_test", /* name */
  		OPTGROUP_VEC, /* optinfo_flags */
  		TV_NONE, /* tv_id */
  		PROP_cfg, /* properties_required */
  		0, /* properties_provided */
  		0, /* properties_destroyed */
  		0, /* todo_flags_start */
  		0, /* todo_flags_finish */
	};

	class pass_gimple_diagnostic_test : public gimple_opt_pass
	{
		public:
			pass_gimple_diagnostic_test (gcc::context *ctxt) : gimple_opt_pass (pass_data_gimple_diagnostic_test)
		{}

			bool gate (function *) final override
			{
				return true;
			}

			unsigned int execute (function *) final override;
	};

	unsigned int pass_gimple_diagnostic_test::execute (struct function *fun)
	{
		fprintf(stderr, "Diagnostic Test\n");
		return 0;
	}
}

gimple_opt_pass * make_pass_gimple_diagnostic_test (gcc::context *ctxt)
{
	return new pass_gimple_diagnostic_test (ctxt);
}
