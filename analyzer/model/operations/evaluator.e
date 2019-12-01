note
	description: "Summary description for {EVALUATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EVALUATOR

inherit
	VISITOR

create
	make

feature -- Constructor

	make
		do
			create set.make_empty
			create text.make_empty
		end

feature -- visitors

	visit_integer(e: INTEGER_CONSTANT)
	do

	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	do
		
	end

--	visit_add (e: ADD)
--		local
--			left_evaluator, right_evaluator: EVALUATOR
--		do
--			create left_evaluator.make
--			create right_evaluator.make
--			e.left.accept (left_evaluator)
--			e.right.accept (right_evaluator)
--			integer_value := left_evaluator.integer_value + right_evaluator.integer_value
--			if left_evaluator.text ~ "Divisor is zero!" or right_evaluator.text ~ "Divisor is zero!" then
--				text:="Divisor is zero!"
--			else
--				text := integer_value.out
--			end
--		end

feature -- attributes

	integer_value: INTEGER

	boolean_value: BOOLEAN

	text: STRING

	set: SET [EXPRESSION]

end
