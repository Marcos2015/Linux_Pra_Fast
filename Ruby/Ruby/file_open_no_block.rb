file=File.open("sample.txt")

begin
	file.each_line do | line |
		puts line
	end

ensure
	file.close
end


