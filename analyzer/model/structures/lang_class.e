note
	description: "This class represents a 'class' in the new programming language"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_CLASS

inherit
	ANY
	redefine
		out
	end

create
	make

feature -- Attributes
	name: STRING -- class name
	attributes: LINKED_LIST[LANG_ATTRIBUTE] -- list of attributes
	commands: LINKED_LIST[LANG_COMMANDS] -- list of commands
	queries: LINKED_LIST[LANG_QUERIES] -- list of queries

feature -- Constructor
	make (cn: STRING)
	do
		name := cn
		create attributes.make
		create commands.make
		create queries.make
	end

feature -- Commands

	-- add a new attribute to the class
	add_attribute (a: LANG_ATTRIBUTE)
	do
		attributes.extend (a)
	end

	-- add a new command to the class
	add_command (a: LANG_COMMANDS)
	do
		commands.extend (a)
	end

	-- add a new query to the class
	add_queries (a: LANG_QUERIES)
	do
		queries.extend (a)
	end

feature -- Queries
	out: STRING
	do
		create Result.make_from_string ("This is a new class! Rewrite this output as needed.")
	end

end
