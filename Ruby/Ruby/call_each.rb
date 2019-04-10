def call_each( ary ,&block )
	ary.each(&block)
end

call_each [1,22,56] do | num |
	puts "#{num}"
end


