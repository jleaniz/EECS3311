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

		local
			local_query: LANG_QUERY
    	do
    		model.reset_flags
			-- check if an assignment is being set
			if model.assignment_instruction_on then
				model.set_error_assignment_on (model.current_routine, model.current_class.name)
			else
				-- check for feature name clash
				model.check_feature_name_clash (cn, fn)

				-- set the appropriate error message
				if not model.class_found then
					model.set_error_class_not_found (cn)
				elseif model.check_param_name_clash (ps) then
					model.set_error_parameter_clash
				elseif model.check_dup_params (ps) then
					model.set_error_dup_parameters
				elseif model.check_param_name_clash (ps) then
					model.set_error_param_types_invalid
				end

				-- status_ok being True means the class exists and no other error was found
				-- we can continue to add the command to the class
				if model.status_ok then
					create local_query.make (fn, ps, rt)
					model.set_current_query (local_query)
					model.current_class.add_query (local_query)
				end
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
