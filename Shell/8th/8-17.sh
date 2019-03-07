#! /bin/sh

echo "Please input the num"
read num

factorial=1

while [ "$num" -gt 0 ]
do
	let "factorial=factorial*num" # 先把最高阶乘乘以1，保存在factorial,然后num--，再一次乘以num,继续不断这样循环下去，达到目的.
#	((num--))   # 不可以写成: num--(书上的写法) ，否则报错，可能bash语法不一样
let "num--"     # 如果不写成((num--)),可以这样写也可以
done

echo "The factorial is $factorial"


