note
	description: "Summary description for {COMPOSITE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COMPOSITE[G]

feature -- Attributes
	children: LINKED_LIST[G]
	left: G
	right: G

feature -- Commands
	add_children (nc: G)
	do
		children.extend(nc)
	end

end
