sum=0
outcome={"参展费"=>1000,"挂件费用"=>1000,"联欢费用"=>4000}
outcome.each do | iterm,price |   #在这里,iterm代表散列outcome的键,而price代表散列outcome的值
	sum+=price
end

puts "合计: #{sum}"
#puts "#{iterm},#{pair}"
#puts "#{ iterm }"  不能打印出散列的键
#puts "#{ price }"  不能打印出散列的值




