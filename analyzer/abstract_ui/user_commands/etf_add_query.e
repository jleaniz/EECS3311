note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_QUERY
inherit
	ETF_ADD_QUERY_INTERFACE
create
	make
feature -- command
	add_query(cn: STRING ; fn: STRING ; ps: ARRAY[TUPLE[pn: STRING; pt: STRING]] ; rt: STRING)
		require else
			add_query_precond(cn, fn, ps, rt)
    	do
    		model.reset_flags
			-- check if an assignment is being set
			if model.assignment_instruction_on then
				model.set_error_assignment_on (model.current_routine, model.current_class.name)
			else
				-- Check if class exists
				from
					model.classes.start
				until
					model.classes.after or model.class_found
				loop
					if model.classes.item.name ~ cn then
						model.set_class_found (True)
						model.set_current_class (model.classes.item)
					end
					model.classes.forth
				end

				-- if the class is not found, set the appropriate error
				if not model.class_found then
					model.set_error_class_not_found (cn)
				end

				-- check if feature name eists
				across model.current_class.commands is command loop
					if command.name ~ fn then
						model.set_feature_already_exists (cn, fn)
					end
				end

				-- status_ok being True means the class exists and no other error was found
				-- we can continue to add the command to the class
				if model.status_ok then
					--model.current_attribute.make_mepty
					model.current_query.set_name (fn)
					model.current_query.set_params (ps)
					model.current_query.set_return_type (rt)
					model.current_class.add_query (model.current_query)
				end
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
