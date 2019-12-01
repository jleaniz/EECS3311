note
	description: "Summary description for {VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR

feature -- deferred features

	visit_integer(e: INTEGER_CONSTANT)
	deferred
	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	deferred
	end
end
