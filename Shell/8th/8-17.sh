#! /bin/sh

echo "Please input the num"
read num

factorial=1

while [ "$num" -gt 0 ]
do
	let "factorial=factorial*num" # 先把最高阶乘乘以1，保存在factorial,然后num--，再一次乘以num,继续不断这样循环下去，达到目的.
	num--
done

echo "The factorial is $factorial"


