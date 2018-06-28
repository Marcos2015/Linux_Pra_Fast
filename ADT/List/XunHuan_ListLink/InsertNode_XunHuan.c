#include <stdio.h>
#include <stdlib.h>


struct node
{
	int num;
	struct node* next;
};


struct node* CreateNode(int n)
{
	struct node* current,*previous,*head;
	for(int m=0;m<n;m++)
	{
		current=(struct node*)malloc(sizeof(struct node));
		current->num=m;
		if(m==0)
		{
			head=current;
		}
		else
		{
			previous->next=current;
		}
	previous=current;
	current->next=NULL;
	}
	current->next=head;
	return head;
}


struct node* TraverseNode(struct node* head)
{
	struct node* point;
	point=head;
	do
	{
		printf("%d\t",point->num);
		point=point->next;
	}while(point!=head); //如果缺少current->next=head;这一条语句,那么point!=head这个循环条件则会导致point跑到单链表最后一个节点的再前一个位置,这个位置也符合point!=head,但是这个位置是未知的,然后在这个位置执行printf("%d\t",point->num);就会出现段错误,访问位置空间.
	putchar(10);
	return head;
}








struct node* InsertNode(struct node* head,struct node* p)
{
	struct node* point,*current,*previous;
	point=head;
	if(!head)
	{
		head=p;
		p->next=head;
	}
	else
	{
		while(p->num > point->num && point->next!=head)
		{
			previous=point;	
			point=point->next;
		}
		if(p->num < point->num )
		{
		    if( head == point )
		    {
			head=p;
			p->next=point;
		    }
		    else
		    {
				previous->next=p;
				p->next=point;
		    }
		}
		else
		{   
			point->next=p;
			p->next=head;
		}
	}
	return head;
}

		    		





int main()
{
	//test(CreateNode(7));
	//TraverseNode(CreateNode(7));
	struct node* p=(struct node*)malloc(sizeof(struct node));
	p->num=500;
	struct node* k=InsertNode(CreateNode(9),p);
	TraverseNode(k);
	return 0;
}

