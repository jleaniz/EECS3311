note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_TYPE_CHECK
inherit
	ETF_TYPE_CHECK_INTERFACE
create
	make
feature -- command
	type_check
    	do
			-- perform some update on the model state
			if model.assignment_instruction_on then

			else
				model.set_error_assignment_unspecified
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
