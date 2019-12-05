note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADDITION
inherit
	ETF_ADDITION_INTERFACE
create
	make
feature -- command
	addition
    	do
    		model.reset_flags
			-- perform some update on the model state
			if model.assignment_instruction_on then

			else
				model.set_error_assignment_unspecified
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
