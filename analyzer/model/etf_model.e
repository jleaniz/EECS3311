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
			i := 0
			class_count := 0
		end

feature -- model attributes
	class_count: INTEGER
	status_ok: BOOLEAN
	error_msg: STRING
	assignment_instruction_on: BOOLEAN
	i: INTEGER

feature -- model operations
	default_update
		-- Perform update to the model state.
	do
		i := i + 1
	end

	reset
		-- Reset model state.
	do
		make
	end

	set_error_assignment_unspecified
	do
		status_ok := False
		error_msg := "Error (An assignment instruction is not currently being specified).%N"
	end

	set_error_assignment_on (routine, class_name: STRING)
	do
		status_ok := False
		error_msg :=
		"Error (An assignment instruction is currently being specified for routine "
		+ routine + " in class " + class_name + ")."
	end

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			if status_ok then
				Result.append ("Status: OK%N")
			else
				Result.append (error_msg)
			end
			Result.append ("  Number of classes being specified: ")
			Result.append (class_count.out)
		end

end




