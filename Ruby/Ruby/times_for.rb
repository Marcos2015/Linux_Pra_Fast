from=10
to=20
sum=0

(to-from+1).times do | i |    # i从0开始计数，因为是从10累加到20，而第一次from=10.那么i在第一次的时候必须为0,从10 ~ 20，一共累加11次,即是循环11次，所以to-from必须+1,否则只累加10次. 
	sum=sum+(from + i )
end

puts sum

