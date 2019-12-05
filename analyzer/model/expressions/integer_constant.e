note
	description: "Summary description for {INTEGER_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTEGER_CONSTANT

inherit
	EXPRESSION

create
	make

feature -- Constructor
	make (i: INTEGER)
	do
		value := i
	end

feature -- Attributes
	value: INTEGER

feature -- Commands
	accept (v: VISITOR)
	do
		v.visit_integer (Current)
	end

	output: STRING
	do
		Result := value.out
	end

invariant
	positive_integer: value > 0

end
