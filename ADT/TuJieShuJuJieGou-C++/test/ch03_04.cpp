#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <iomanip>
using namespace std;

class list
{
	public:
		int num,score;
		char name[10];
		class list* next;
};

typedef class list node;
typedef node* link;

link findnode(link head,int num) //head绝对是一条链表的头结点,从头结点开始遍历寻找node.
{
	link ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->num==num)
		{
		    return ptr;
		}
	    ptr=ptr-next;
	}
return ptr;
}




