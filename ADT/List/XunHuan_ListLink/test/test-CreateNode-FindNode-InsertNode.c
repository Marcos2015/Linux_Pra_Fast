#include <stdio.h>
#include <stdlib.h>


struct node
{
	int num;
	struct node* next;
};


struct node* create_node(int n)
{
	struct node* head,*previous,*point;
	for(int m=0;m<n;m++)
	{
	    point=(struct node*)malloc(sizeof(struct node));
	    point->num=m;
	    if(m==0)
	    {
		    head=point;
	    }
	    else
	    {
		    previous->next=point;
	    }
	    previous=point;
	    point->next=NULL;
	}
	point->next=head;
	return head;
}


struct node* traverse_node(struct node* head)
{
	struct node* point = head;
	do
	{
		printf("%d\t",point->num);
		point=point->next;
	}while(point!=head);
	putchar(10);

	return head;
}



struct node* insert_node(struct node* head)
{

	struct node* point=head;
	struct node* insert_node=(struct node*)malloc(sizeof(struct node));
	insert_node->num=100;
	insert_node->next=point;
	do
	{
		point=point->next;

	}while(point->next!=head);

	point->next=insert_node;
	head=insert_node;
	return head;
}



int main()
{
    traverse_node(insert_node(traverse_node(create_node(8))));

    return 0;
}


