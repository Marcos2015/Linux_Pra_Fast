#! /bin/sh

S01_name="Li Hao"
S01_dept=Computer
S01_phone=025-83481010
S01_rank=5


S02_name="Zhang San"
S02_dept=English
S02_phone=025-83181010
S02_rank=9

S03_name="Zhu Lin"
S03_dept=Physics
S03_phone=025-8340000
S03_rank=3


PS3='Please select the number of student: '

select stunum in "S01" "S02" "S03"
do
	name=${stunum}_name
	dept=${stunum}_dept
	phone=${stunum}_phone
	rank=${stunum}_rank

	echo "Basic Information of NO.$stunum stduent:"
	echo "NAME:${!name}"
	echo "DEPARTMENT:${!dept}"
	echo "PHONE:${!phone}"
	echo "RANK:${!rank}"

	break
done


