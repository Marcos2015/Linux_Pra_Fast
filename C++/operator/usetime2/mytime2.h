#include <iostream>


class Time
{
	private: 
		int hours;	
		int minutes;
	public:
		Time();
		Time(int h,int m);
		void AddMin(int m);
		void AddHour(int h);
		void Reset(int h=0,int m=0);
		Time operator+(const Time& t)const;
		Time operator-(const Time& t)const;
		Time operator*(double mul)const;
				
		void Show()const;

};



