#! /bin/bash

function sum()
{
	if [ $# -ne 2 ]
	then 
		echo "usage is sum <param1> <param2>"
	exit
	fi

return $(($1 + $2 ))
}


sum 6 10

#ret=$?

echo $ret
