#! /bin/sh

for variable in {1..5}
do
	sleep 0.5
	echo "$variable"
done


echo "There is spent time :$SECONDS"

