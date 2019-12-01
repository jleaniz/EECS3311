note
	description: "Summary description for {BOOLEAN_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_CONSTANT

inherit
	EXPRESSION

feature -- Attributes
	value: BOOLEAN

feature -- Commands
	accept (v: VISITOR)
	do

	end

	output: STRING
	do
		Result := value.out
	end

end
