file=ARGV[0]
filename=File.open(file)

filename.each_line do | line |
	print line
end

filename.close

