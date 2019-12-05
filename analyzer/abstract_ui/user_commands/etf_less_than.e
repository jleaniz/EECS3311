note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_LESS_THAN
inherit
	ETF_LESS_THAN_INTERFACE
create
	make
feature -- command
	less_than
    	do
    		model.reset_flags
			etf_cmd_container.on_change.notify ([Current])
    	end

end
