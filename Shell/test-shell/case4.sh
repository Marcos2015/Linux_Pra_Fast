#! /bin/bash

name="Tim"

case "$name" in
	"Dan"	) echo "lt's Dan";;
	"Marc" | "Tim" )echo "lt's  me." ;;
	"ronald"	)echo "I dont't know you.";;
esac
exit

