#include <stdio.h>
#include <stdlib.h>

struct node
{
	int num;
	struct node* next;;
};



struct node* create(int n)
{

	struct node* head,*p1,*p2;
	head=p1=p2=NULL;

	for(int i=0;i<n;i++)
	{
		//struct node* p1=(struct node*)malloc(sizeof(struct node)); //不能再这个地方使用struct node* p1定义,因为如果定义之后,p1作用域就处在for循环中,当for循环结束后,p1也自动消失,在接下来的代码p1->next=head;出现段错误.
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
	struct node* p=point;
	do
	{
		printf("%d ",p->num);
		p=p->next;
	}while(p!=point);
putchar(10);

	return point;
}


int main()
{
	//create(9);
	traverse(create(9));
	return 0;
}



