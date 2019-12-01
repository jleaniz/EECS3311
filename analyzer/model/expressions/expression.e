note
	description: "Summary description for {EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	EXPRESSION

feature -- Commands
	output: STRING
	deferred
	end

	accept (v: VISITOR)
	deferred
	end

end
