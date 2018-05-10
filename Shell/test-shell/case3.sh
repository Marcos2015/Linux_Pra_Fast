#! /bin/bash

char=f

case "$char" in
	[a-zA-Z] ) echo "An upper or lower case character";;
	[0-9]	)echo "A number";;
	*	)echo "something else";;
esac
exit

