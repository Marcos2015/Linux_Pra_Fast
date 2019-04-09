def my_block
	yield("Jim")
end

my_block do | char |
	puts "#{char}"
end


