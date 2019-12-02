note
	description: "Summary description for {LOGICAL_AND}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LOGICAL_AND


inherit
	EXPRESSION
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
		v.visit_logical_and (Current)
	end

	output: STRING
	do
		Result := left.output + right.output
	end

invariant
	binary_operation: children.count = 2

end
