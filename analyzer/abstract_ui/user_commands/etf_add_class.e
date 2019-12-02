note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CLASS
inherit
	ETF_ADD_CLASS_INTERFACE
create
	make
feature -- command
	add_class(cn: STRING)
		require else
			add_class_precond(cn)
    	do

			-- check if an assignment is being specified
			if model.assignment_instruction_on then
				model.set_error_assignment_on (model.current_routine, model.current_class.name)
			else
				-- check if the class already exists
				across model.classes is c loop
					if c.name ~ cn then
						model.set_error_class_exists (cn)
					end
				end
				-- if the status is ok, add the class...
				if model.status_ok then
					model.current_class.make (cn)
					model.classes.extend (model.current_class)
				end

			end

			etf_cmd_container.on_change.notify ([Current])
    	end
end
