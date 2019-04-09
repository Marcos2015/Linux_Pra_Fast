sum=0
outcome={"参展费"=>1000,"挂件费用"=>1000,"联欢费用"=>4000}
outcome.each do | pair |   #pari代表一个数组,pair[0]代表散列outcome的键，pair[1]代表散列outcome的值.
	sum+=pair[1]
end

puts "合计: #{sum}"



