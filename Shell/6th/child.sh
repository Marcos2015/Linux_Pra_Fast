#! /bin/bash

echo "Child Process ID is : $$"
echo "My Father Process ID is $PPID"

echo "localvar=$localvar"
echo "ENVVAR=$ENVVAR"

localvar="Redefine this local variable."
ENVVAR="Redfine this ebviroment variable."
echo "localvar=$localvar"
echo "ENVVAR=$ENVVAR"


