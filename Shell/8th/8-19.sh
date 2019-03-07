#! /bin/sh

echo "Please input the num"
read num

sum=0
i=1
signal=0


while [ "$signal"  -ne 1 ] # $符号只有在条件判断或echo的时候才需要添加在变量前,如果在let则不需要
do
	if [ "$i" -eq "$num" ]
	then 
		let "signal=1"
		let "sum+=i"
		echo "1+2+..$num=$sum"
	else
		let "sum+=i"
		let "i++"
	fi
done


