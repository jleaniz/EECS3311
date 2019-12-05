note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CALL_CHAIN
inherit
	ETF_ADD_CALL_CHAIN_INTERFACE
create
	make
feature -- command
	add_call_chain(chain: ARRAY[STRING])
    	do
			-- perform some update on the model state
			model.reset_flags
			if model.assignment_instruction_on then
				if chain.is_empty then
					model.set_error_call_chain_empty
--					model.set_routine_being_implemented_flag (False)
--					model.set_assignment_flag (False)
				end
			else
				model.set_error_assignment_unspecified
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
