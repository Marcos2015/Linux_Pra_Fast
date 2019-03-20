#! /bin/sh

echo "what are you favorite color?"

select color    #在命令行输入一堆颜色选择，由于select是一个无限循环，必须有一个break终止。
do
	break
done

echo "You select colore is:$color"

