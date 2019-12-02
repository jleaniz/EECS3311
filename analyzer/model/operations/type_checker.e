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

feature -- Visitor

	-- Visitor pattern is applied here to type check each expression
	-- TODO: Complete the visitor features (i.e. type check the expressions)

	visit_addition (e: ADDITION)
	do

	end

	visit_substraction (e: SUBTRACTION)
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

	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	do

	end


feature -- Attributes
	value: INTEGER
	type_correct: BOOLEAN
end
