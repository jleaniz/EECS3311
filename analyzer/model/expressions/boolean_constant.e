note
	description: "Summary description for {BOOLEAN_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_CONSTANT

inherit
	EXPRESSION

create
	make

feature -- Constructor
	make (b: BOOLEAN)
	do
		value := b
	end

feature -- Attributes
	value: BOOLEAN

feature -- Commands
	accept (v: VISITOR)
	do
		v.visit_boolean (Current)
	end

	output: STRING
	do
		Result := value.out
	end

end
