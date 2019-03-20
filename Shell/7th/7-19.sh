#! /bin/sh

mkdir /Users/zhaofeng/Linux_Pra_Fast/Shell/Test_File/
cd  /Users/zhaofeng/Linux_Pra_Fast/Shell/Test_File/
touch file_create1

if [ -e /Users/zhaofeng/Linux_Pra_Fast/Shell/Test_File/file_create1 ]  # -e 是否存在该文件
then echo "the file_create had been create successful"

fi

