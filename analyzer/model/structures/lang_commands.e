note
	description: "Summary description for {LANG_COMMANDS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_COMMANDS

create
	make

feature -- Attributes
	name: STRING -- command name
	parameters: ARRAY[TUPLE[STRING]] -- command parameters

feature -- Constructor
	make
	do
		create name.make_empty
		create parameters.make_empty
	end

end
