#! /bin/bash

echo "The script name is : `basename $0` 
echo "The Parameter #1: $1"
echo "The Parameter #2: $2"
echo "The Parameter #3: $3"
echo "The Parameter #4: $4"
echo "The Parameter #5: $5"
echo "The Parameter #6: $6"
echo "The Parameter #7: $7"
echo "The Parameter #8: $8"
echo "The Parameter #9: $9"



echo "The Parameter #10: ${10}"



echo "-----------------------------------------------------"

echo "All the command line parameters are : $*  $@"
echo "All the command line parameters are : $# "
echo "All the command line parameters are : $$"
echo "All the command line parameters are : $?"


