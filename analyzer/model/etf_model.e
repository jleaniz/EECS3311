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
			routine_being_implemented := False
			class_found := False
			feature_found := False
			param_found := False
			dup_found := False
			param_type_invalid := False
			return_type_invalid := False
			gen_code_on := False
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
			create param_types_invalid.make_empty
			create dup_parameters.make_empty
			create params_clash.make_empty
			create code.make_empty
			attribute_found := False
			command_found := False
			query_found := False
			assigin_attribute_implementation_error := False
		end

feature -- model attributes

	status_ok: BOOLEAN
	class_found: BOOLEAN
	feature_found: BOOLEAN
	param_found: BOOLEAN
	dup_found: BOOLEAN
	param_type_invalid: BOOLEAN
	return_Type_invalid: BOOLEAN
	assignment_instruction_on: BOOLEAN
	routine_being_implemented: BOOLEAN
	error_msg: STRING
	dup_parameters: ARRAY[STRING]
	params_clash: ARRAY[STRING]
	param_types_invalid: ARRAY[STRING]
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
	--new attributes
	attribute_found: BOOLEAN
	command_found: BOOLEAN
	query_found: BOOLEAN
	gen_code_on: BOOLEAN
	code: STRING
	assigin_attribute_implementation_error: BOOLEAN

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

	set_error_feature_already_exists (cn, fn: STRING )
	do
		set_status(False)
		error_msg := "Status: Error (" + fn + " is already an existing feature name in class " + cn + ").%N"
	end

	set_error_feature_not_found (cn, fn: STRING) --used in ETF_ADD_ASSIGNMENT
	do
		set_status(False)
		error_msg := "Status: Error (" + fn + " is not an existing feature name in class "+ cn +").%N"
	end

	set_error_call_chain_empty
	do
		set_status(False)
		error_msg := "Status: Error (Call chain is empty).%N"
	end

	set_code (c: STRING)
	do
		code := c
	end

	set_error_parameter_clash
	do
		set_status(False)
		error_msg := "Status: Error (Parameter names clash with existing classes: "
		across
			params_clash.lower |..| params_clash.upper is i
		loop
			if i < params_clash.upper then
				error_msg.append (params_clash[i] + ", ")
			else
				error_msg.append (params_clash[i])
			end
		end
		error_msg.append (").%N")
	end

	set_error_param_types_invalid
	do
		set_status(False)
		error_msg := "Status: Error (Parameter types do not refer to primitive types or existing classes: "
		across
			param_types_invalid.lower |..| param_types_invalid.upper is i
		loop
			if i < param_types_invalid.upper then
				error_msg.append (param_types_invalid[i] + ", ")
			else
				error_msg.append (param_types_invalid[i])
			end
		end
		error_msg.append (").%N")
	end


	set_error_dup_parameters
	do
		set_status(False)
		error_msg := "Status: Error (Duplicated parameter names: "
		across
			dup_parameters.lower |..| dup_parameters.upper is i
		loop
			if i < dup_parameters.upper then
				error_msg.append (dup_parameters[i] + ", ")
			else
				error_msg.append (dup_parameters[i])
			end
		end
		error_msg.append (").%N")
	end

	set_error_return_type (rt: STRING)
	do
		set_status(False)
		error_msg := "Status: Error (Return type does not refer to a primitive type or an existing class: " + rt + ").%N"
	end

	set_error_cannot_specify_att (cn: STRING; fn: STRING) --used in ETF_ADD_ASSIGNMENT
	do
		set_status(False)
		error_msg := "Status: Error (Attribute " + fn + " in class " + cn + " cannot be specified with an implementation).%N"
	end

	set_class_found (b: BOOLEAN)
	do
		class_found := b
	end

	set_feature_found (b: BOOLEAN)
	do
		feature_found := b
	end

	set_param_found (b: BOOLEAN)
	do
		param_found := b
	end

	set_dup_found (b: BOOLEAN)
	do
		dup_found := b
	end

	set_param_type_invalid (b: BOOLEAN)
	do
		param_type_invalid := b
	end

	set_return_type_invalid (b: BOOLEAN)
	do
		return_type_invalid := b
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

	set_routine_being_implemented_flag (b: BOOLEAN)
	do
		routine_being_implemented := b
	end

	reset_flags
	do
   		set_status (True)
    	set_class_found (False)
    	set_feature_found (False)
    	set_param_found (False)
    	set_dup_found (False)
    	set_param_type_invalid (False)
    	set_return_type_invalid (False)
    	set_attribute_found(False)
    	set_command_found(False)
    	set_query_found(False)
    	set_gen_code(False)
--    	set_assigin_attribute_implementation_error(False)
	end

	--new methods:
	set_gen_code (b: BOOLEAN)
	do
		gen_code_on := b
	end

	set_attribute_found(b: BOOLEAN)
	do
		attribute_found:= b
	end

	set_command_found(b: BOOLEAN)
	do
		command_found := b
	end
	set_query_found(b: BOOLEAN)
	do
		query_found := b
	end

	set_current_assignment_instruction(a: LANG_ASSIGNMENT)
	do
		current_assignment_instruction := a
	end

	set_assigin_attribute_implementation_error(b: BOOLEAN)
	do
		assigin_attribute_implementation_error := b
	end
feature -- Queries

	-- check if class exists
	check_class_found (cn: STRING)
	do
		from
			classes.start
		until
			classes.after
		loop
			if classes.item.name ~ cn then
				set_class_found (True)
				set_current_class (classes.item)
			end
			classes.forth
		end
	end

	-- This feature checks if there is a name clash between
	-- an attribute, command, or query within a specific class
	-- If there is a clash, it sets the appropriate flags and
	-- error messages.
	check_feature_name_clash (cn: STRING; fn: STRING)
	require
		cn /= Void and fn /= Void
	do
		-- Check if class already exists
		from
			classes.start
		until
			classes.after or class_found
		loop
			if classes.item.name ~ cn then
				set_class_found (True)
				set_current_class (classes.item)
				across classes.item.features.lower |..| classes.item.features.upper is i loop
					if attached {LANG_ATTRIBUTE} classes.item.features[i] as att then
						if att.name ~ fn  then
							set_feature_found(True)
							set_error_feature_already_exists (cn, fn)
						end
					elseif attached {LANG_COMMAND} classes.item.features[i] as cmd then
						if cmd.name ~ fn  then
							set_feature_found(True)
							set_error_feature_already_exists (cn, fn)
						end
					elseif attached {LANG_QUERY} classes.item.features[i] as query then
						if query.name ~ fn  then
							set_feature_found(True)
							set_error_feature_already_exists (cn, fn)
						end
					end
				end
			end
			classes.forth
		end
	end

	check_feature_exists (cn, fn: STRING)
	require
		cn /= Void and fn /= Void
	local
		p, q: BOOLEAN
	do
		from
			classes.start
		until
			classes.after
		loop
			if classes.item.name ~ cn then
				p := across classes.item.attributes is i some i.name ~ fn  end
				if p then
					set_error_cannot_specify_att (cn, fn)
				end
				if not p then
					q := (
					across classes.item.commands is j all j.name /~ fn end
					and
					across classes.item.queries is k all k.name /~ fn  end
					)
					if q then
						set_error_feature_not_found (cn, fn)
					end
				end
			end
			classes.forth
		end
	end


	-- This feature checks if there is a parameter name clash
	-- with the provided parameters
	check_param_name_clash (params: ARRAY[TUPLE[STRING, STRING]]): BOOLEAN
	do
		create params_clash.make_empty

		across params as tuple loop
			if tuple.item[1] ~ "INTEGER"   then
				params_clash.force ("INTEGER", params_clash.count + 1)
				set_param_found (True)
				Result := True
			elseif tuple.item[1] ~ "BOOLEAN"   then
				params_clash.force ("BOOLEAN", params_clash.count + 1)
				set_param_found (True)
				Result := True
			else
				across classes as c loop
					if c.item.name ~ tuple.item[1] then
						if not(params_clash.has (c.item.name)) then
							params_clash.force (c.item.name, params_clash.count + 1)
							set_param_found (True)
							Result := True
						end
					end
				end
			end
		end

		if param_found then
			set_error_parameter_clash
		end
	end

	-- This feature checks if there are any duplicate names between
	-- the supplied parameters for a specific command or query
	-- !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	-- TODO; Fix order of duplicate parameters (at05.txt)!!!!!!!!!!!!!!!!!!!
	-- !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	check_dup_params (params: ARRAY[TUPLE[STRING, STRING]]): BOOLEAN
	local
		list: ARRAY[STRING]
		dups: ARRAY[STRING]
		i, j: INTEGER

	do
		create list.make_empty
		create dups.make_empty
		list.compare_objects
--		from
--			i := params.lower
--		until
--			i > params.upper
--		loop
--			if attached {STRING} params[i][1] as ni then
--				if list.has (ni) then
--					dups.force (ni, dups.count + 1)
--					set_dup_found (True)
--					Result := True
--				end
--				list.force (ni, list.count + 1)
--			end
--			i := i + 1
--		end

		from
			i := params.lower
		until
			i > params.upper - 1
		loop
			from
				j := i + 1
			until
				j > params.upper
			loop
				if attached {STRING} params[i][1] as ni then
					list.force (ni, list.count + 1)
					if attached {STRING} params[j][1] as nj then
						if list.has (nj) then
							dups.force (nj, dups.count + 1)
							set_dup_found (True)
							Result := True
						end
					end
				end
				j := j + 1
			end
			i := i + 1
		end

		if dup_found then
			dup_parameters := dups
			set_error_dup_parameters
		end

	end

	-- This feature checks if the parameters are invalid
	check_parameter_type_invalid (params: ARRAY[TUPLE[STRING, STRING]]): BOOLEAN
	local
		i: INTEGER
		p, q: BOOLEAN
	do
		create param_types_invalid.make_empty
		from
			i := params.lower
		until
			i > params.upper
		loop
			if attached {STRING} params[i][2] as ni then
				p := across classes is c all c.name /~ ni end
				q := (ni /~ "INTEGER") and (ni /~ "BOOLEAN")
				if p and q then
					set_param_type_invalid (True)
					Result := True
					param_types_invalid.force (ni, param_types_invalid.count + 1)
				end
			end
			i := i + 1
		end

		if param_type_invalid then
			set_error_param_types_invalid
		end
	end

	-- This feature checks if the return type is valid
	check_return_type_invalid (rt: STRING): BOOLEAN
	do
		if across classes is c all c.name /~ rt end then
			if rt /~ "INTEGER" and rt /~ "BOOLEAN" then
				set_return_type_invalid (True)
				Result := True
			end
		end
	end

	out : STRING
		do
			-- This is where we print messages after any user input
			create Result.make_from_string ("  ")

			-- print status and/or error
			if status_ok then
				Result.append ("Status: OK.%N")
			else
				Result.append (error_msg)
			end

			-- print number of existing classes
			Result.append ("  Number of classes being specified: ")
			Result.append (classes.count.out)

			-- print the classes
			across classes is c loop Result.append (c.out) end

			-- print current routine being implemented
			if routine_being_implemented then
				Result.append ("%N")
				Result.append ("  Routine currently being implemented: ")
				Result.append ("{" + current_class.name + "}." + current_routine)
			end

			-- print any assignments that are currently being specified
			-- TODO: Fix this to use the pretty printer for all assigned expressions
			if assignment_instruction_on then
				Result.append ("%N")
				Result.append ("  Assignment being specified:" + current_assignment_instruction.out + " := ?")
			end

			if gen_code_on then
				Result.make_empty
				Result.append (code)
			end
		end

end




