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
				--    		model.set_assigin_attribute_implementation_error(False)
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
							-- check if fn is attribute name instead of feature name
							-- when ture, program should throw this error: Error (Attribute att in class A cannot be specified with an implementation).
						from
							model.classes.item.attributes.start
						until
							model.classes.item.attributes.after or model.assigin_attribute_implementation_error
						loop
							if model.classes.item.attributes.item.name ~ fn then
								model.set_assigin_attribute_implementation_error (True)
							end
						end

							--if fn is not an attribute name then continue to check if fn exist in COMMAND or QUERY lists
						if NOT (model.assigin_attribute_implementation_error) then

								-- check if fn exist in the COMMAND list
							from
								model.classes.item.commands.start
							until
								model.classes.item.commands.after or model.feature_found
							loop
								if model.classes.item.commands.item.name ~ fn then
									model.set_command_found (True)
									model.set_feature_found (True)
									model.set_current_command (model.classes.item.commands.item)

										--will update the error message when Jackie replies on the Forum

										--if n is "Result" then we have error
										--								if n ~ "Result" then
										--									set_error_feature_not_found()
										--								end

								end
								model.classes.item.commands.forth
							end
								-- check if fn exist in the query list
							if not model.feature_found then
								from
									model.classes.item.queries.start
								until
									model.classes.item.queries.after or model.feature_found
								loop
									if model.classes.item.queries.item.name ~ fn then
										model.set_query_found (True)
										model.set_feature_found (True)
										model.set_current_query (model.classes.item.queries.item)
									end
									model.classes.item.queries.forth
								end
							end
						end
						model.classes.forth
					end
					if model.class_found AND model.feature_found then
							--check if n is "Result" or existing attribute in the current class
						if n ~ "Result" AND model.query_found then
							model.set_attribute_found (True)
							current_attribute.make ("Result", model.current_query.return_type)
							model.set_current_attribute (current_attribute)
							current_assignment.make (cn, fn, "Result")
							model.set_current_assignment_instruction (current_assignment)
						else
							from
								model.classes.item.attributes.start
							until
								model.classes.item.attributes.after or model.attribute_found
							loop
								if model.classes.item.attributes.item.name ~ n then
									model.set_attribute_found (True)
									model.set_current_attribute (model.classes.item.attributes.item)
										--									model.set_current_assignment_instruction(current_assignment.make (cn, fn, "Result"))
									current_assignment.make (cn, fn, n)
									model.set_current_assignment_instruction (current_assignment)
								end
							end
						end
					end
				end

					-- if the class is not found, set the appropriate error
					-- otherwise, the feature was not found
				if not model.class_found then
						--will print: "Status: Error (" + class_name + " is not an existing class name).%N"
					model.set_error_class_not_found (cn)
				elseif model.assigin_attribute_implementation_error then
						--will print: "Status: Error (Attribute " + fn + "in class " + cn + " cannot be specified with an implementation).%N"
					model.set_error_cannot_specify_att (fn, cn)
				elseif not model.feature_found then
						--will print: "Status: Error (" + fn + " is not an existing feature name in class "+ cn +").%N"
					model.set_error_feature_not_found (fn, cn)
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
