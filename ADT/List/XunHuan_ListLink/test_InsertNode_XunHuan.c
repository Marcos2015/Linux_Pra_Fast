#include <stdlib.h>
#include <stdio.h>


struct node
{
	int num;
	struct node* next;
};



struct node* create(int n)
{
	struct node* head,*p1,*p2;
	head=p1=p2=NULL;
	for( int i=0;i<n;i++)
	{
		p1=(struct node*)malloc(sizeof(struct node));
		p1->num=i;
		if(i==0)
		{
			head=p1;
		}
		else
		{
			p2->next=p1;
		}
		p2=p1;
		p1->next=NULL;
	}
	p1->next=head;
	return head;
}


struct node* traverse(struct node* point)
{
	struct node *head;
	head=point;
	do
	{
		printf("%d\t ",head->num);
		head=head->next;
	}while(head != point );
putchar(10);

	return point;
}





struct node* insertnode(struct node* old_link)
{
	struct node* current,*head;
	struct node* p=(struct node*)malloc(sizeof(struct node));
	p->num=100;
	p->next=old_link;
	head=current=old_link;

	while(current->next != old_link)
	{
		current=current->next;
	}



	head=p;

	return head;
}




int main()
{
	struct node* p=create(7);
	traverse(p);
//	traverse(insertnode(create(9)));
       struct node* p2=insertnode(p);
       traverse(p2);
	return 0;
}



