#! /bin/sh

PS3="Please select a number: "
select name in zhangsan lisi wangwu zhaoliu #select是一个无限循环，所以一般需要有一个break终止
do
    case $name in
    zhangsan)
        echo "Hello, zhangsan."
        ;;
    lisi)
        echo "Hello,lisi."
        ;;
    wangwu)
        echo "Hello, wangwu."
        ;;
    zhaoliu)
        echo "Hello, zhaoliu."
        ;;
    *)
        echo "Sorry, there is no such person."
        ;;
    esac
done

