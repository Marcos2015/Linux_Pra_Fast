#! /bin/sh

sum=0

for i in $(seq 1 3 100)
do
	let "sum+=i"
done
    echo "sum=$sum"




