#! /bin/bash

thefile="test.sh"

if [ -e $thefile ]
then
	echo "file exists"

if [ -f $thefile ]
then 
	echo "regualr file"

elif [ -d $thefile ]
then
	echo "directory"

elif [ -h $thefile ]
then 
	echo "symbolic link"
fi

else
	echo "file not present"
fi

exit


