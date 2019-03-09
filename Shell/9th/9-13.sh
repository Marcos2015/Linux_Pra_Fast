#! /bin/sh

echo "Please input your name"
read name

if [ -z "$name" ]
then
	#echo "The name is Empty"
	name = "{ no answer }"
fi

echo "The name is $name"


TMOUT=9
