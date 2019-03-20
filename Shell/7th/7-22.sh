#! /bin/sh

echo "Please input this file which you want to delete"
read file

#if   rm -f "$file"
#if  ! rm -f "$file"
#then 	
#	echo "Successful"
#else
#	echo "Failed"
#fi

if  ! rm -f "$file"
then 	
	echo "Failed"
else
	echo "Successful"
fi
