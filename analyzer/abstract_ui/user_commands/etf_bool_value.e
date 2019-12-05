note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_BOOL_VALUE
inherit
	ETF_BOOL_VALUE_INTERFACE
create
	make
feature -- command
	bool_value(c: BOOLEAN)
    	do
			model.reset_flags

			if model.assignment_instruction_on then
				-- set the assignment and turn off flags
				model.set_assignment_flag (False)
				model.set_routine_being_implemented_flag (False)
			else
				model.set_error_assignment_unspecified
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
