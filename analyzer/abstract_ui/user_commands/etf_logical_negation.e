note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_LOGICAL_NEGATION
inherit
	ETF_LOGICAL_NEGATION_INTERFACE
create
	make
feature -- command
	logical_negation
    	do
    		model.reset_flags
			etf_cmd_container.on_change.notify ([Current])
    	end

end
