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
			model.set_routine_being_implemented_flag (False)
			model.set_assignment_flag (False)
			etf_cmd_container.on_change.notify ([Current])
    	end

end
