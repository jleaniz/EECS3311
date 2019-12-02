note
	description: "Summary description for {PRETTY_PRINTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRETTY_PRINTER

inherit
	VISITOR

create
	make

feature {NONE} -- Constructor

	make
		do
			create text.make_empty
		end

feature {ETF_MODEL} --hidden

	reset
		do
			make
		end

feature -- Queries

	visit_addition (e: ADDITION)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" + ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_substraction (e: SUBTRACTION)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" - ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_multiplication (e: MULTIPLICATION)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" * ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_quotient (e: QUOTIENT)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" / ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_modulo (e: MODULO)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" %% ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_logical_and (e: LOGICAL_AND)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" && ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_logical_or (e: LOGICAL_OR)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" || ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_equals (e: EQUALS)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" == ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_less_than (e: LESS_THAN)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" %< ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_greater_than (e: GREATER_THAN)
	do
		text.append ("(")
		e.left.accept (Current)
		text.append (" %> ")
		e.right.accept (Current)
		text.append (")")
	end

	visit_integer(e: INTEGER_CONSTANT)
	do
		text.append (e.output)
	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	do
		text.append (e.output)
	end

feature -- Queries

	text: STRING

end
