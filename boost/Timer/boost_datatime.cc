#include </usr/local/Cellar/boost/1.67.0_1/include/boost/date_time/gregorian/gregorian.hpp>
#include <iostream>

int main()
{
	boost::gregorian::date d(boost::gregorian::day_clock::local_day());
	std::cout <<d.year() << d.month() << d.day() <<std::endl;
return 0;
}



