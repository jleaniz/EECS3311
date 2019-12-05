note
	description: "Summary description for {TYPE_CHECK}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECKER

inherit
	VISITOR
create
	make

feature {NONE} -- Constructor
	make
	do
	end

feature {ETF_MODEL} --hidden
	reset
	do
		make
	end

feature -- Attributes
	value: INTEGER
	type_correct: BOOLEAN

feature -- Visitor

	-- Visitor pattern is applied here to type check each expression
	-- TODO: Complete the visitor features (i.e. type check the expressions)

	visit_addition (e: ADDITION)
	local
			check_left, check_right: TYPE_CHECKER
			left_is_integer, right_is_integer: BOOLEAN
	do
--		create a.make_from_string ("hery")
		create check_left.make
		create check_right.make
		left_is_integer := false
		right_is_integer := false
		e.left.accept (check_left)
		e.right.accept (check_right)
		value := check_left.value + check_right.value
		if attached {INTEGER} check_left.value then
			left_is_integer := TRUE
		end
		if attached {INTEGER} check_right.value then
			right_is_integer := TRUE
		end
		type_correct := left_is_integer AND right_is_integer
	end

	visit_subtraction (e: SUBTRACTION)
	do

	end

	visit_multiplication (e: MULTIPLICATION)
	do

	end

	visit_quotient (e: QUOTIENT)
	do

	end

	visit_modulo (e: MODULO)
	do

	end

	visit_logical_and (e: LOGICAL_AND)
	do

	end

	visit_logical_or (e: LOGICAL_OR)
	do

	end

	visit_equals (e: EQUALS)
	do

	end

	visit_less_than (e: LESS_THAN)
	do

	end

	visit_greater_than (e: GREATER_THAN)
	do

	end

	visit_integer(e: INTEGER_CONSTANT)
	do
		value := e.value
	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	do

	end

end
