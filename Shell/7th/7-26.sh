#! /bin/sh


#判断闰年的两种条件：
#能被4整除，但不能被100整除
#能被100整除，但又能被400整除

echo "Please input  a year:"
read year

let "n1=$year % 4"
let "n2=$year % 100"
let "n3=$year % 400"

if [ ! "$n1" -eq 0 ] #不能被4整除
then 
	leap=0  #不是闰年
elif [ ! "$n2" -eq 0 ] #能被4整除又不能被100整除
then 
	leap=1 #闰年
elif [ ! "$n3" -eq 0 ] #能被4整除，能被100整除，但不能被400整除
then 
	leap=0 #不是闰年
else
	leap=1 #能被4，100，400整除，是闰年。
fi

if [ "$leap" -eq 1 ]
then 
	echo "$year is a leap year"
else 
	echo "$year is not a leap year"
fi

