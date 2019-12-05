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

	add_assignment_instruction (cn: STRING; fn: STRING; n: STRING)
		require else
			add_assignment_instruction_precond (cn, fn, n)
		local
			current_assignment: LANG_ASSIGNMENT
			current_attribute: LANG_ATTRIBUTE
		do
			create current_assignment.make_empty
			create current_attribute.make_empty
			model.reset_flags
			if model.assignment_instruction_on then
				model.set_error_assignment_on (model.current_routine, model.current_class.name)
			else
				model.check_class_found (cn)
				model.check_feature_exists (cn, fn)

				if not model.class_found then
					model.set_error_class_not_found (cn)
				end
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
