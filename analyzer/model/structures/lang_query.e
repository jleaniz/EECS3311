note
	description: "Summary description for {LANG_QUERIES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_QUERY

inherit
	ANY
	redefine
		out
	end

create
	make_empty

feature -- Attributes
	name: STRING -- command name
	parameters: ARRAY[TUPLE[STRING]] -- command parameters
	return_type: STRING -- return type

feature -- Constructor
	make_empty
	do
		create name.make_empty
		create parameters.make_empty
		create return_type.make_empty
	end

feature -- Queries
	out: STRING
	do
		create Result.make_from_string ("  ")
	end

end
