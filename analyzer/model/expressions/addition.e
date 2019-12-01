note
	description: "Summary description for {ADDITION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ADDITION

inherit
	EXPRESSION
	COMPOSITE[EXPRESSION]

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

	end

	output: STRING
	do
		Result := left.output + right.output
	end

invariant
	binary_operation: children.count = 2

end
