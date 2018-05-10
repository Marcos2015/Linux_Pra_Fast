#include <iostream>
#include "mytime2.h"


Time::Time()
{
	hours=0;
}


Time::Time(int h,int m)
{
	hours=h;
	minutes=m;
}


void Time::AddMin(int m)
{
	minutes+=m;
	hours+=minutes/60;
	minutes%=minutes%60;
}

void Time::AddHour(int h)
{
	hours+=h;
}


Time Time::operator+(const Time& t)const
{
	Time sum;
	sum.minutes=t.minutes+minutes;
	sum.hours=hours+t.hours+sum.minutes/60;
	sum.minutes%=60;
return sum;
}



Time Time::operator-(const Time& t)const
{
	Time sum;
	int tot1_minutes,tot2_minutes;
	tot1_minutes=t.minutes+60*t.hours;
	tot2_minutes=minutes+60*hours;
		sum.minutes=(tot2_minutes-tot1_minutes)%60;
		sum.hours=(tot2_minutes-tot1_minutes)/60;
return sum;
}


Time Time::operator*(double mul)const
{
	Time sum;
	int totl_minutes=hours*mul*60+minutes;
	sum.hours=totl_minutes/60;
	sum.minutes=totl_minutes%60;
return sum;
}




void Time::Show()const
{
	std::cout << "hours="<< hours << std::endl;
	std::cout << "minutes="<< minutes << std::endl;
}

void Time::Reset(int h,int m)
{

	hours=h;
	minutes=m;
}


