#! /bin/sh

echo "Please Input a integer(0-100):"
read score

if [ "$score" -lt 0 -o "$score" -gt 100 ]
then 
	echo "The score what you input is not integer or the score is not in (0-100)."
elif [ "$score" -ge 90 ]
then 
	echo "The grade is A!"
elif [ "$score" -ge 80 ]
then 
	echo "The grade is B ! "
elif [ "$score" -ge 70 ]
then 
	echo "The grade is C ! "
elif [ "$score" -ge 60 ]
then 
	echo "The grade is D ! "

else
	echo "The  grades is E ! "
fi

if [ "$leap" -eq 1 ]
then 
	echo "$year is a leap year"
else
	echo "$year is not a leap year"
fi

