note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_EQUALS
inherit
	ETF_EQUALS_INTERFACE
create
	make
feature -- command
	equals
    	do
    		model.reset_flags
    		if model.assignment_instruction_on then


			else
				model.set_error_assignment_unspecified
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
