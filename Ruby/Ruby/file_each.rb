file=File.open("simple.txt")

file.each_line do | line |
	puts line
end

file.close
