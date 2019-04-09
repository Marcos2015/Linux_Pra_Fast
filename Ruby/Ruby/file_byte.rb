file=File.open("sample.txt")

file.each_byte do | line |
	puts line

end

file.close
