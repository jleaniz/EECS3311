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
    	do
    		model.reset_flags
			etf_cmd_container.on_change.notify ([Current])
    	end

end
