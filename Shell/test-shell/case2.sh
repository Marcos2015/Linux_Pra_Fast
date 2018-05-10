#! /bin/bash

var=2

case "$var" in
[0-5])echo "the value is between 0 and 5";;
[6-9])echo "the value is between 6 and 9";;
*)echo "lt's something else.."


esac

exit



