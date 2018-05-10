#! /bin/bash

function sum()
{
	if [ $# -le 2 ]
	then
		echo "usage is sum <param1> <param2>"
	exit
	fi

	echo $(($1 + $2))
}

sum 5

