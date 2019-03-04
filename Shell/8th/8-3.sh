#! /bin/sh

sum=0

for i in {1..10..2}
do
	let "sum+=i"
done

echo "sum=$sum"

