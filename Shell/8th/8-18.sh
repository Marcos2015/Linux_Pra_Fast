#! /bin/sh

echo "Please input the num:"
read num

signal=0

while [[ "$signal" != 1 ]]
do 
	if [ "$num" -lt 4 ]
	then 
		echo "Too small.Try again!"
		read num
	elif [ "$num" -gt 4 ] #这里不可以是else,否则报错。必须是elif,因为不能和下面的else组成连续两个else，语法错误
 	then	
		echo "To high.Try again"
		read num
	else
		signal=1
		echo "Congratulation ,you are right!"
	fi
done

