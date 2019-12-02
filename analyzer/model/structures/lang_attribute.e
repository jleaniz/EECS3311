note
	description: "Summary description for {LANG_ATTRIBUTE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_ATTRIBUTE

create
	make

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

end
