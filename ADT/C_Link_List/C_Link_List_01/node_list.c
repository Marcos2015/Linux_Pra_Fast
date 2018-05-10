#include <stdlib.h>
#include <stdio.h>
#define len sizeof(struct node)
const int MAXNUMOFBASE = 5;
int count=0;

struct node
{
	int data;
	struct node* next;
};

struct node* headp;
enum returninfo
{
	success,
	fail,
	overflow,
	underflow,
	rang_error
};

int sourcedata[MAXNUMOFBASE] = { 11,22,33,44,55 };



/*create*/
returninfo create()
{
	struct node* searchp = headp, *newnodep;
	int i;
	for( i=0;i<MAXNUMOFBASE;i++)
	{
		newnodep = ( struct node* )malloc( len );
		newnodep->data = sourcedata[i];
		searchp->next=newnodep;
		searchp = searchp->next;
		count++;
	}
	searchp->next = NULL;
	return success;
}


int main()
{
	create();
return 0;
}







