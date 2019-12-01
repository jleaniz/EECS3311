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

--	visit_current (e: CURRENT_EXPRESSION)
--		do
--			text.append (e.output)
--		end

--	visit_add (e: ADD)
--		do
--			text.append ("(")
--			e.left.accept (Current)
--			text.append (" + ")
--			e.right.accept (Current)
--			text.append (")")
--		end
	visit_integer(e: INTEGER_CONSTANT)
	do

	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	do

	end

feature -- Queries

	text: STRING

end
