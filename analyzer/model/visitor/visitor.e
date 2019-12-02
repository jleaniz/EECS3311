note
	description: "Summary description for {VISITOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	VISITOR

feature -- deferred features for the visitor pattern

	visit_integer(e: INTEGER_CONSTANT)
	deferred
	end

	visit_boolean(e: BOOLEAN_CONSTANT)
	deferred
	end

	visit_addition (e: ADDITION)
	deferred
	end

	visit_substraction (e: SUBTRACTION)
	deferred
	end

	visit_multiplication (e: MULTIPLICATION)
	deferred
	end

	visit_quotient (e: QUOTIENT)
	deferred
	end

	visit_modulo (e: MODULO)
	deferred
	end

	visit_logical_and (e: LOGICAL_AND)
	deferred
	end

	visit_logical_or (e: LOGICAL_OR)
	deferred
	end

	visit_equals (e: EQUALS)
	deferred
	end

	visit_less_than (e: LESS_THAN)
	deferred
	end

	visit_greater_than (e: GREATER_THAN)
	deferred
	end

end
