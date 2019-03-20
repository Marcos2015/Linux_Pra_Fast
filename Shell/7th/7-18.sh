#! /bin/sh

echo "Please input a integer:"
read integer1

if [ "$integer1" -gt 10 -a "$integer1" -lt 50 ]
then echo "The integer which you input is lower than 50 and more then 10"
fi


