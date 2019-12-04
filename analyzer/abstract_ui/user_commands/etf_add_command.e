note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_COMMAND
inherit
	ETF_ADD_COMMAND_INTERFACE
create
	make
feature -- command
	add_command(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; ft: STRING]])
		require else
			add_command_precond(cn, fn, ps)

		local
			local_command: LANG_COMMAND
    	do
    		model.reset_flags
			-- check if an assignment is being set
			if model.assignment_instruction_on then
				model.set_error_assignment_on (model.current_routine, model.current_class.name)
			else
				-- check for feature name clash
				model.check_feature_name_clash (cn, fn)
				-- check param name clash
				model.check_param_name_clash (ps)

				-- if the class is not found, set the appropriate error
				if not model.class_found then
					model.set_error_class_not_found (cn)
				end

				-- status_ok being True means the class exists and no other error was found
				-- we can continue to add the command to the class
				if model.status_ok then
					create local_command.make (fn, ps)
					model.set_current_command (local_command)
					model.current_class.add_command (local_command)
				end
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
