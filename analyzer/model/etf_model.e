note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			error_msg := " "
			status_ok := True
			assignment_instruction_on := False
			class_found := False
			create classes.make (5)
			create current_class.make_empty
			create current_routine.make_empty
			create current_attribute.make_empty
			create current_query.make_empty
			create current_command.make_empty
			create current_assignment_instruction.make_empty
			create assignment_expressions.make (5)
			create pretty_printer.make
			create type_checker.make
			create code_gen.make
		end

feature -- model attributes

	status_ok: BOOLEAN
	class_found: BOOLEAN
	assignment_instruction_on: BOOLEAN
	error_msg: STRING
	classes: ARRAYED_LIST[LANG_CLASS]
	current_class: LANG_CLASS
	current_routine: STRING
	current_query: LANG_QUERY
	current_command: LANG_COMMAND
	current_attribute: LANG_ATTRIBUTE
	current_assignment_instruction: LANG_ASSIGNMENT
	assignment_expressions: ARRAYED_STACK[EXPRESSION]
	pretty_printer: PRETTY_PRINTER
	type_checker: TYPE_CHECKER
	code_gen: CODE_GENERATOR

feature -- model operations

	reset
		-- Reset model state.
	do
		make
	end

	set_status (s: BOOLEAN)
	do
		status_ok := s
	end

	-- Call this when an assignment instruction is not being specified
	-- and the user tries to run "addition" or "add_call_chain"
	-- See Table 2 in project specs
	set_error_assignment_unspecified
	do
		set_status(False)
		error_msg := "Status: Error (An assignment instruction is not currently being specified).%N"
	end

	-- Call this when an assignment is being specified and the user tries
	-- to run an operation for a class or type_check
	-- See Table 2 in project specs
	set_error_assignment_on (routine, class_name: STRING)
	do
		set_status(False)
		error_msg :=
		"Status: Error (An assignment instruction is currently being specified for routine "
		+ routine + " in class " + class_name + ").%N"
	end

	set_error_class_exists (class_name: STRING)
	do
		set_status(False)
		error_msg := "Status: Error (" + class_name + " is already an existing class name).%N"
	end

	set_error_class_not_found (class_name: STRING)
	do
		set_status(False)
		error_msg := "Status: Error (" + class_name + " is not an existing class name).%N"
	end

	set_feature_already_exists (cn, fn: STRING )
	do
		set_status(False)
		error_msg := "Status: Error (" + fn + " is already an existing feature name in class " + cn + ").%N"
	end

	set_class_found (b: BOOLEAN)
	do
		class_found := b
	end

	set_current_class (c: LANG_CLASS)
	do
		current_class := c
	end

	set_current_routine (r: STRING)
	do
		current_routine := r
	end

	set_current_attribute (att: LANG_ATTRIBUTE)
	do
		current_attribute := att
	end

	set_current_command (c: LANG_COMMAND)
	do
		current_command := c
	end

	set_current_query (q: LANG_QUERY)
	do
		current_query := q
	end

	set_assignment_flag (b: BOOLEAN)
	do
		assignment_instruction_on := b
	end


feature -- queries
	out : STRING
		do
			-- This is where we print messages after any user input
			create Result.make_from_string ("  ")

			-- print status and/or error
			if status_ok then
				Result.append ("Status: OK%N")
			else
				Result.append (error_msg)
			end

			-- print number of existing classes
			Result.append ("  Number of classes being specified: ")
			Result.append (classes.count.out + "%N")

			-- print the classes
			across classes is c loop Result.append (c.out) end

			-- print current routine being implemented
			Result.append ("  Routine currently being implemented: ")
			Result.append ("{" + current_class.name + "}." + current_routine + "%N")

			-- print any assignments that are currently being specified
			-- TODO: Fix this to use the pretty printer for all assigned expressions
			if assignment_instruction_on then
				Result.append ("  Assignment being specified: " + current_assignment_instruction.out + " := ?")
			end
		end

end




