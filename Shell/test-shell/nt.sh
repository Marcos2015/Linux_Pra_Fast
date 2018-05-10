#! /bin/sh

file1=eq.sh
file2=today.sh

if [ $file1 -nt $file2 ]
then
	echo "$file1 than $file2 new"
else
	echo "$file1 than $file2 old"
fi


