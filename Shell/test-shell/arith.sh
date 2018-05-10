#! /bin/sh

k=10
y=5

let sum=$k+$y
diff=$(( $k-$y ))
let mul=$k*$y
let div=$k/$y
let mod=$k%$y
let exp=$k**$y

echo "$mul"
echo "$div"
echo "$mod"
echo "$k-$y=$diff"
echo "$exp"

exit

