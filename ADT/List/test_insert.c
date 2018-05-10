#include <stdlib.h>
#include <stdio.h>

struct node
{
    int num;
    struct node* next;
};



struct node* create(int n)
{
    struct node* head,*p;
    int i;
    for(i=0;i<n;i++)
    {
	struct node* point=(struct node*)malloc(sizeof(struct node));
	point->num=i;
	if(0==i)
	{
	    head=point;
	}
	else
	{
	    p->next=point;
	}
	p=point;
	point->next=NULL;
    }
    return head;
}


struct node* insert_node(struct node* head,struct node* p)
{
    struct node* p1,*p2;
    if(!head)
    {
	head=p;
	p->next=NULL;
	return head;
    }
    else
    {	
	for(p1=head;p->num > p1->num && p1->next!=NULL;p1=p1->next)
	{
	    p2=p1;
	}


	if(p->num <= p1->num)
	{
	    if(p1==head)
	    {
		head=p; 
		p->next=p1; //
	//	p1->next=NULL;
	    }
	    else
	    {
		p2->next=p;
		p->next=p1;
	    }
	}
	else
        {
	    p1->next=p;
	    p->next=NULL;
	}
    }

    return head;
}


int foreach(struct node* head)
{
    while(head!=NULL)
    {
	printf("%d\t",head->num);
    	head=head->next;
    }
}






int main()
    {
	struct node* head=create(9);
	foreach(head);
	printf("\n");
	struct node* p=(struct node*)malloc(sizeof(struct node));
	p->num=-9;
        struct node* insert=insert_node(head,p);
	foreach(insert);
	return 0;
    }



