note
	description: "Summary description for {LANG_COMMANDS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_COMMAND

inherit
	LANG_FEATURE
	redefine
		out
	end

create
	make, make_empty

feature -- Attributes
	name: STRING -- command name
	parameters: ARRAY[TUPLE[STRING]] -- command parameters

feature -- Constructor
	make_empty
	do
		create name.make_empty
		create parameters.make_empty
	end

	make (n: STRING; params: ARRAY[TUPLE[pn: STRING; ft: STRING]])
	do
		create name.make_from_string (n)
		create parameters.make_empty
		across params is tuple loop
			parameters.force (tuple, parameters.count + 1)
		end

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

feature -- Queries
	out: STRING
	do
		create Result.make_from_string ("%N")
		Result.append ("        + ")
		Result.append (name)
	end


end
