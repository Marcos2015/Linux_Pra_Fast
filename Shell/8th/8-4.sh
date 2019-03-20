#! /bin/sh

sum=0

<<<<<<< HEAD
for i in $ seq  1 2 100 
do
	let "sum+=i"
done 
	echo "sum=$sum"
=======
for i in $(seq 1 3 100)
do
	let "sum+=i"
done
    echo "sum=$sum"


>>>>>>> 15cb8facf6a15f31181b9cbd8012b5d7269b68b7


