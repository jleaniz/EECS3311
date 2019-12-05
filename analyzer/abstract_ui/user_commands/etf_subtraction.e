note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SUBTRACTION
inherit
	ETF_SUBTRACTION_INTERFACE
create
	make
feature -- command
	subtraction
    	do
    		model.reset_flags
			etf_cmd_container.on_change.notify ([Current])
    	end

end
