#include <iostream>
#include "mytime.h"


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


Time Time::Sum(const Time& t)const
{
	Time sum;
	sum.minutes=t.minutes+minutes;
	sum.hours=hours+t.hours+sum.minutes/60;
	sum.minutes%=60;
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


