#! /bin/sh

if [ "$1" ] #输入的参数(即文件)不为空
then  
	echo "what you input is not null"
	if [ -e "$1" ]
	then 
		echo "the file is Exit"
	else
		echo "the file not Exit"
	fi
else
	echo "you input is null"
fi

