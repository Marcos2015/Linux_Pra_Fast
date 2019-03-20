#! /bin/sh

echo "Pls.choose your profession"
select variable in "Worker" "Doctor" "Teacher" "Student" "Other"
do 
	echo "The \$REPLY is $REPLY"
	echo "Your Preofession is $variable"

	break
done

