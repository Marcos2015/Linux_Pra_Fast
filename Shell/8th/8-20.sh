#! /bin/sh

echo "number of arguments is: $#"

echo "what you input is :"

while [ "$*" != "" ]  #不可以使用 [ "$*" -ne 0 ] ，否则报错，ne是整数运算符,不可以用于字符串和文件操作
do
	echo "$1"
	shift
done


