note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ASSIGNMENT_INSTRUCTION
inherit
	ETF_ADD_ASSIGNMENT_INSTRUCTION_INTERFACE
create
	make
feature -- command
	add_assignment_instruction(cn: STRING ; fn: STRING ; n: STRING)
		require else
			add_assignment_instruction_precond(cn, fn, n)
    	do
    		model.reset_flags
			-- check if an assignment is being set
			if model.assignment_instruction_on then
				model.set_error_assignment_on (model.current_routine, model.current_class.name)
			else
				-- Check if class already exists
				from
					model.classes.start
				until
					model.classes.after or model.class_found
				loop
					if model.classes.item.name ~ cn then
						model.set_class_found (True)
						model.set_current_class (model.classes.item)
						from
							model.classes.item.commands.start
						until
							model.classes.item.commands.after or model.feature_found
						loop
							if model.classes.item.commands.item.name ~ fn then
								model.set_feature_found (True)
								model.set_current_command (model.classes.item.commands.item)
							end
							model.classes.item.commands.forth
						end
					end
					model.classes.forth
				end


				-- if the class is not found, set the appropriate error
				-- otherwise, the feature was not found
				if not model.class_found then
					model.set_error_class_not_found (cn)
				elseif not model.feature_found then
					model.set_error_feature_not_found (fn)
				end

				-- status_ok being True means the class exists and no other error was found
				-- we can continue to add the command to the class
				if model.status_ok then
					model.set_assignment_flag (True)
					model.set_routine_being_implemented_flag (True)
					model.set_current_routine (fn)
					model.current_assignment_instruction.make (cn, fn, n)
				end

			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
