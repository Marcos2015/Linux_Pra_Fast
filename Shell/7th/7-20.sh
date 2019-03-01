#! /bin/sh

echo "please input a string:"
read str

if [ -z "$str" ]
then echo "what you input is NULL"
	exit 1;
fi

