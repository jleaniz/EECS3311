note
	description: "Summary description for {LANG_ATTRIBUTE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_ATTRIBUTE

inherit
	LANG_FEATURE
	redefine
		out
	end

create
	make, make_empty

feature -- Attributes
	name: STRING
	type: STRING

feature -- Constructor
	make (an: STRING; att_type: STRING)
	do
		name := an
		create type.make_empty
		if att_type ~ "INTEGER" or att_type ~ "BOOLEAN" then
			type := att_type
		end
	end

	make_empty
	do
		create name.make_empty
		create type.make_empty
	end

feature -- Commands
	set_name (n: STRING)
	do
		name := n
	end

	set_type (n: STRING)
	do
		type := n
	end


feature -- Queries
	out: STRING
	do
		create Result.make_from_string ("        + ")
		Result.append (name + ": " + type + "%N")
	end

end
