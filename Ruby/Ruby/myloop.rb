def myloop
	while true
		yield
	end
end


num=1

myloop{
	puts "#{num}"
	if num > 10
		break
		end
	num*=2
}



