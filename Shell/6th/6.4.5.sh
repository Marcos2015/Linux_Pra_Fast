#! /bin/bash

variable=`ls -l`
echo $variable
echo "$variable"

variable2=" ()\\{}\$\""
echo $variable2
echo "$variable2"

IFS='\'

echo $variable2
echo "$variable2"

exit 0

