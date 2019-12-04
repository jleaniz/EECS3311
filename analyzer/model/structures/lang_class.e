note
	description: "This class represents a 'class' in the new programming language"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_CLASS

inherit
	LANG_FEATURE
	redefine
		out
	end

create
	make, make_empty

feature -- Attributes
	name: STRING -- class name
	features: ARRAY[LANG_FEATURE] -- array of features
	attributes: LINKED_LIST[LANG_ATTRIBUTE] -- list of attributes
	commands: LINKED_LIST[LANG_COMMAND] -- list of commands
	queries: LINKED_LIST[LANG_QUERY] -- list of queries

feature -- Constructor
	make (cn: STRING)
	do
		name := cn
		create features.make_empty
		create attributes.make
		create commands.make
		create queries.make
	end

	make_empty
	do
		create features.make_empty
		create attributes.make
		create commands.make
		create queries.make
		create name.make_empty
	end

feature -- Commands

	-- add a new attribute to the class
	add_attribute  (a: LANG_ATTRIBUTE)
	do
		attributes.extend (a)
		features.force (a, features.count + 1)
	end

	add_command (a: LANG_COMMAND)
	do
		commands.extend (a)
		features.force (a, features.count + 1)
	end

	add_query (a: LANG_QUERY)
	do
		queries.extend (a)
		features.force (a, features.count + 1)
	end


feature -- Queries
	out: STRING
	do
		create Result.make_from_string ("%N")
		Result.append ("    " + name + "%N")
		Result.append ("      Number of attributes: ")
		Result.append (attributes.count.out + "%N")
		across attributes is att loop Result.append (att.out)  end
		Result.append ("      Number of queries: ")
		Result.append (queries.count.out  + "%N")
		across queries is query loop Result.append (query.out)  end
		Result.append ("      Number of commands: ")
		Result.append (commands.count.out)
		across commands is command loop Result.append (command.out)  end
	end

end
