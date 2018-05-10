#!/bin/bash

curwd=$PWD
cd /

echo -n "Users on the system are: "

for user in *
do
	echo  " $user"
done

cd $curwd
exit


