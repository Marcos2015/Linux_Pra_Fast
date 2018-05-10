#include <iostream>
#include "stock00.h"

void Stock:: acquire( const std :: string  & co, long n, double pr)
{
	company = co;
	if( n < 0 )
	{
		std :: cout << "Number of shares cant't be negative; "
				 << company << "shares set to 0. \n";
		shares =0;
	}else
		shares = n;
		share_val = pr;
		set_tot();
}



void Stock::buy(long num,double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted .\n";

	}else{
		shares += num;
		share_val = price;
		set_tot();
	}
}


void Stock::sell(long num, double price)
{
	using std:: cout ;
	if(num < 0)
	{
		cout << "Number of shares sold can't be begative. "
			<< "Transaction is abort. \n";

	}
	else if( num > shares)
	{
		cout << "You can't sell more than you have ! "
			<< "transaction is aborted.\n";
	}
	else {
		shares -= num ;
		share_val = price ;
		set_tot();
	}
}




void  Stock:: update(double price)
{
	share_val = price ;
	set_tot();
}


void Stock::show ()
{
//	using std::cout;
	std::cout << "Company: " << company
		<< " Shares: " << shares << '\n'
		<< " Shares Price : $" << share_val
		<< "Total Worth: $" << total_val << '\n';
}


