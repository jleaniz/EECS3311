note
	description: "Summary description for {LANG_CLASS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_CLASS

create
	make

feature -- Attributes
	name: STRING
	attributes: LINKED_LIST[LANG_ATTRIBUTE]
	commands: LINKED_LIST[LANG_COMMANDS]
	queries: LINKED_LIST[LANG_QUERIES]

feature -- Constructor
	make (cn: STRING)
	do
		name := cn
		create attributes.make
		create commands.make
		create queries.make
	end

feature -- Commands
	add_attribute (a: LANG_ATTRIBUTE)
	do
		attributes.extend (a)
	end

	add_command (a: LANG_COMMANDS)
	do
		commands.extend (a)
	end
	
	add_queries (a: LANG_QUERIES)
	do
		queries.extend (a)
	end
end
