note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_ATTRIBUTE
inherit
	ETF_ADD_ATTRIBUTE_INTERFACE
create
	make
feature -- command
	add_attribute(cn: STRING ; fn: STRING ; ft: STRING)
		require else
			add_attribute_precond(cn, fn, ft)
    	do
    		model.reset_flags
			-- check if an assignment is being set
			if model.assignment_instruction_on then
				model.set_error_assignment_on (model.current_routine, model.current_class.name)
			else
				model.check_name_clash (cn, fn)

				-- if the class is not found, set the appropriate error
				if not model.class_found then
					model.set_error_class_not_found (cn)
				end

				-- status_ok being True means the class exists and no other error was found
				-- we can continue to add the attribute to the class
				if model.status_ok then
					model.current_attribute.make (fn, ft)
					model.set_current_attribute (model.current_attribute)
					model.current_class.add_attribute (model.current_attribute)
				end
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
