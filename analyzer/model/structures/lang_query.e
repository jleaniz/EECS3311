note
	description: "Summary description for {LANG_QUERIES}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_QUERY

inherit
	LANG_FEATURE
	redefine
		out
	end

create
	make_empty, make

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

	make (fn: STRING; ps: ARRAY[TUPLE[STRING]]; rt: STRING)
	do
		set_name (fn)
		set_params (ps)
		set_return_type (rt)
	end

feature -- Commands

	set_name (n: STRING)
	do
		name := n
	end

	set_params (p: ARRAY[TUPLE[STRING]])
	do
		parameters := p
	end

	set_return_type (r: STRING)
	do
		return_type := r
	end

feature -- Queries
	out: STRING
	do
		create Result.make_from_string ("  ")
	end

end
