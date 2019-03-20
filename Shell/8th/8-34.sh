#! /bin/sh

echo "what is your favourite color?"

select color in "red" "blue" "green" "white" "black"
do
	 break # select 是无限循环，所以要用break退出循环，或者用exit命令终止脚本，或者用Ctrl + C 退出循环。
done

echo "You have selected $color"

