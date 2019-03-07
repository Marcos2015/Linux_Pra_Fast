#! /bin/sh

for(( i=1;i<=9 ;i++))
do
	for((j=1;j<=i;j++))
	do
		let "sum=i*j"
		echo -n  "$i*$j=$sum "
	done
	echo ""

done


