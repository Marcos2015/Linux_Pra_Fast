#! /bin/sh

variable1=2009
variable2=$variable1+1

echo "variable2=$variable2"

let variable3=$variable1+1
echo "variable3=$variable3"

declare -i variable4=$variable1+3
echo "varibale4=$variable4"

