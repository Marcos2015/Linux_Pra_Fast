#include <stdio.h>
#include <stdlib.h>



struct node
{
	int num;
	struct node* next;
};


struct node* InsertNode(struct node* head,struct node* p)
{
	struct node* current,*previous;
	current=head;
	if(!head)
	{
		head=p;
		p->next=head;
	}
	else
	{
		while(p->num > current->num &&  current->next != head)
		{
			previous=current;
			current=current->next;

		}
		if(p->num < current->num)
		{
		    if(current==head)
		    {
			    p->next=current;
		    }

		    		

