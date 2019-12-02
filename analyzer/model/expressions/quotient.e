note
	description: "Summary description for {QUOTIENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	QUOTIENT

inherit
	COMPOSITE_EXPRESSION[EXPRESSION]

create
	make

feature
	make (lc, rc: EXPRESSION)
	do
		create children.make
		left := lc
		right := rc
		children.extend(lc)
		children.extend(rc)
	end

	accept (v: VISITOR)
	do
		v.visit_quotient (Current)
	end

	output: STRING
	do
		Result := left.output + right.output
	end

invariant
	binary_operation: children.count = 2

end
