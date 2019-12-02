note
	description: "Summary description for {CODE_GENERATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CODE_GENERATOR

inherit
	VISITOR
create
	make

feature {NONE} -- Constructor
	make
	do
		create code.make_empty
	end

feature {ETF_MODEL} --hidden
	reset
	do
		make
	end

feature -- Attributes
	code: STRING

feature -- Visitor

	-- Visitor pattern is applied here to type check each expression
	-- TODO: Complete the visitor features (i.e. type check the expressions)

	visit_addition (e: ADDITION)
	do

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

	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	do

	end


end
