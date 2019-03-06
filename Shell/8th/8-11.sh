#! /bin/sh

sum=0

for(( i=0 ; i<1000 ; i=i+2 ))
do
	let "sum+=i"
done

echo "$sum"

