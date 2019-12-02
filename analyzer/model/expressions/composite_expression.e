note
	description: "Summary description for {COMPOSITE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMPOSITE_EXPRESSION[G]

feature -- Attributes
	children: LINKED_LIST[G]
	left: EXPRESSION
	right: EXPRESSION

feature -- Commands
	add_children (nc: G)
	do
		children.extend(nc)
	end

end
