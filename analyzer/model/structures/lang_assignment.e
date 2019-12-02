note
	description: "Summary description for {ASSIGNMENT_INSTRUCTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LANG_ASSIGNMENT

inherit
	LANG_FEATURE
	redefine
		out
	end


create
	make, make_empty

feature -- Attributes
	class_name: STRING
	feature_name: STRING
	var_name: STRING

feature -- Constructors
	make_empty
	do
		create class_name.make_empty
		create feature_name.make_empty
		create var_name.make_empty
	end

	make (cn, fn, vn: STRING)
	do
		create class_name.make_from_string(cn)
		create feature_name.make_from_string(fn)
		create var_name.make_from_string(vn)
	end

feature -- Commands

	set_class_name (n: STRING)
	do
		class_name := n
	end

	set_feature_name (n: STRING)
	do
		feature_name := n
	end

	set_var_name (n: STRING)
	do
		var_name := n
	end

	out: STRING
	do
		create Result.make_from_string(" ")
		Result.append (var_name)
	end

end
