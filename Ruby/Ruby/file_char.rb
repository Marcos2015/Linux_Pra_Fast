file=File.open("sample.txt")

file.each_char do | char |
	puts char 
end

file.close

