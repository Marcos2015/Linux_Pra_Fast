gcc -c -Wall initapi.c
gcc -c -Wall randapi.c
ar -cru libmyrand.a initapi.o randapi.o  

gcc test.c -L. -lmyrand -o test
#不需要吧头文件进行编译链接，因为已经放入静态库里面了。

rm -rf *.o

