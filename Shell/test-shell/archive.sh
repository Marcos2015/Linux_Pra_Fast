#! /bin/bash

if [ $# -ne 1 ];then
	echo "Usage is ./archive.sh <directory-name>"
exit -1
fi


if [ ! -e $1 ];then
	echo "directory is not exist"
exit -1
fi



if [ ! -d $1 ];then
	echo "Target must be a directory."
exit -1
fi




archive=$1.tgz
if [ -f $archive ];then
	rm -f $archive
fi



tar cfz $archive $1

exit









