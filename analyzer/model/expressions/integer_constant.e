note
	description: "Summary description for {INTEGER_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTEGER_CONSTANT

inherit
	EXPRESSION

feature -- Attributes
	value: INTEGER

feature -- Commands
	accept (v: VISITOR)
	do

	end

	output: STRING
	do
		Result := value.out
	end


end
