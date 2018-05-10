#include "tabtenn1.h"
#include <iostream>
/*带初始化列表的构造函数*/
TableTennisPlayer::TableTennisPlayer ( const string & fn,const string & ln ,bool ht):
	firstname(fn),lastname(ln),hasTable(ht)
	{
	}





	void TableTennisPlayer::Name()const
	{
			std::cout << lastname << "," << firstname;
	}








/*两个带初始化列表的构造函数*/
RatedPlayer::RatedPlayer(unsigned int r,const string & fn,const string & ln,bool ht):TableTennisPlayer(fn,ln,ht)
{

	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r,const TableTennisPlayer & tp):TableTennisPlayer(tp),rating(r)
{

}

