array=["Ruby","Perl","PABC","Python"]

call_sum=0

sorted=array.sort do | a,b |
	call_sum+=1
	a<=>b
end

puts "#{call_sum}"
puts "#{sorted}"
