#1 /bin/sh

echo "Please  input the number (1-100)"
read num

while [ "$num" != 4 ] # [ 符号 后必须有一个空格才可以写条件参数，否则报错
do
	if [ "$num" -lt 4 ]
	then
		echo "Too small.Try again!"
		read num
	elif [ "$num" -gt 4 ]
	then 
		echo "Too high.Try again"
		read num
	else
		exit 0
	fi

done

echo "Congratulation ,you are right !"


