note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_GENERATE_JAVA_CODE
inherit
	ETF_GENERATE_JAVA_CODE_INTERFACE
create
	make
feature -- command
	generate_java_code
		local
			codegen: CODE_GENERATOR
			code: STRING
    	do
    		model.reset_flags
    		create codegen.make
    		create code.make_empty
    		model.set_gen_code (True)
    		code.make_from_string ("  class ")
    		across model.classes is c loop
    			code.append (c.name + " {%N")
    			across c.features is f loop
					if attached {LANG_ATTRIBUTE} f as att then
						code.append ("    " + att.type + " " + att.name + ";%N")
					elseif attached {LANG_COMMAND} f as cmd then
						code.append ("    void " + cmd.name + "(")
						if cmd.parameters.is_empty then
							code.append (")%N")
						else
							across cmd.parameters is p loop
								if p[2] ~ "INTEGER" then
									code.append ("int ")
									if attached {STRING} p[1] as p1 then
										code.append (p1)
										if cmd.parameters.at (cmd.parameters.upper) /~ p1 then
											code.append (", ")
										end
									end
								elseif p[2] ~ "BOOLEAN" then
									code.append ("boolean ")
									if attached {STRING} p[1] as p1 then
										code.append (p1)
										if cmd.parameters.at (cmd.parameters.upper) /~ p1 then
											code.append (", ")
										end
									end
								end
							end
							code.append (")%N")
						end
					elseif attached {LANG_QUERY} f as query then
						if query.return_type ~ "INTEGER" then
							code.append ("int " + query.name + "(")
						elseif query.return_type ~ "BOOLEAN" then
							code.append ("boolean " + query.name + "(")
						end
						if query.parameters.is_empty then
							code.append (" }%N")
						else
							across query.parameters is p loop
								if p[2] ~ "INTEGER" then
									code.append ("      int ")
									if attached {STRING} p[1] as p1 then
										code.append (p1 + " {")
										if query.parameters.at (query.parameters.upper) /~ p1 then
											code.append (", ")
										end
									end
								elseif p[2] ~ "BOOLEAN" then
									code.append ("      boolean ")
									if attached {STRING} p[1] as p1 then
										code.append (p1 + " (")
										if query.parameters.at (query.parameters.upper) /~ p1 then
											code.append (", ")
										end
									end
								end
							end
							code.append (")%N")
						end
					end
    			end
    		end
    		model.set_code (code)
			etf_cmd_container.on_change.notify ([Current])
    	end

end
