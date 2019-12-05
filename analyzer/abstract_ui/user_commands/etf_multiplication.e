note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MULTIPLICATION
inherit
	ETF_MULTIPLICATION_INTERFACE
create
	make
feature -- command
	multiplication
    	do
    		model.reset_flags

			etf_cmd_container.on_change.notify ([Current])
    	end

end
