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

	visit_integer(e: INTEGER_CONSTANT)
	do

	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	do

	end

--	visit_current(e: CURRENT_EXPRESSION)
--	do
--		type_correct:=False
--	end

--	visit_nil(e: NIL_EXPRESSION)
--	do
--		type_correct:=false
--	end

--	visit_integer(e: INTEGER_CONSTANT)
--  		do
--			if attached {INTEGER}e.integer then
--				value := 1
--				type_correct := True
--			end
--		end

--	visit_boolean(e: BOOLEAN_CONSTANT)
--		do
--			if attached {BOOLEAN}e.boolean then
--				value := 2
--				type_correct := True
--			end
--		end

--	visit_add(e: ADD)
--		local
--			left_tc: BOOLEAN
--			right_tc: BOOLEAN
--		do
--			e.left.accept (Current)
--			left_tc := (value = 1)
--			e.right.accept (Current)
--			right_tc := (value = 1)
--			type_correct := left_tc and right_tc
--		end


feature -- Attributes
	value: INTEGER
	type_correct: BOOLEAN
end
