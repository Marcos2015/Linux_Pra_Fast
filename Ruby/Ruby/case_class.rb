arry=["A",2,"我们",nil]
arry.each do  |n|
	case n
	when String
		puts "n   is string"
	when Numeric
		puts "n is number"
	else
		puts "other"
	end
end

