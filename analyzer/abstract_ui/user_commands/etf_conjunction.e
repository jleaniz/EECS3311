note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_CONJUNCTION
inherit
	ETF_CONJUNCTION_INTERFACE
create
	make
feature -- command
	conjunction
    	do
    		model.reset_flags
			etf_cmd_container.on_change.notify ([Current])
    	end

end
