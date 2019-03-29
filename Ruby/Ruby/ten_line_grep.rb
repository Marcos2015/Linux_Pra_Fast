pattern=Regexp.new(ARGV[0])
filename=ARGV[1]
max=0
max_mach=10


file=File.open(filename)
file.each_line do | name |
	if max == max_mach
		next
	end

	if pattern =~ name
		max_mach+=1
		puts name
	end
end

file.close

	
