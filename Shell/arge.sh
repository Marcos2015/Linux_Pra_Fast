#!/bin/bash

echo "-------------"
echo "$0"

for key in "$@"
do
	echo '$@' $key
done

echo "-----------"
for key2 in $*
do
	echo '$*' $key2
done


