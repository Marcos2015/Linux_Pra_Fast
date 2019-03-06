#! /bin/sh

sum=0

for(( i=0 ; i<1000 ; i=i+2 ))  # (( 这两个小括号不能有空格，必须连在一起，否则报错，)) 同样道理
do
	let "sum+=i"
done

echo "$sum"

