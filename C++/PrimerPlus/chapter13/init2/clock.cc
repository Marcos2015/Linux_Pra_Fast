#include <iostream>
using namespace std;

class Clock
{
	private:
		int hour;
		int minute;
		int second;

	public:
		Clock(){};
		Clock( int hour,int minute, int second):hour(hour),minute(minute),second(second){}


		void show_timer()
		{
			cout << hour << ":" << minute << ":" << second << endl;
		}


		void set_timer( int hour , int minute, int second)
		{
			this->hour=hour;
			this->minute=minute;
			this->second=second;
		}
};




int main()
{
	
	
	Clock clock1(2,3,4);
	clock1.set_timer(12,13,14);
	clock1.show_timer();
	return 0;
}


