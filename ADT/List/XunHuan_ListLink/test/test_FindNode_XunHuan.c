#include <stdio.h>
#include <stdlib.h>



struct node
{
	int num;
	struct node* next;
};



struct node* Create_LinkList(int n)
{
	struct node* head,*point,*previous;
	head=point=previous=NULL;

	for(int i=0;i<n;i++)
	{
		point=(struct node*)malloc(sizeof(struct node*));
		point->num=i;
		if(i==0)
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


/*
struct node* Traverse_LinkList(struct node* head)
{
	struct node* point;
	for(point=head;point!=head;point=point->next)printf("%d\t",point->num);
	return head;
}
*/
//如果用for循环去遍历打印循环链表,由于在第一个结点point!=head;不成立,因为首先point就被赋值了head(point=head),所以循环根本不会开启.



struct node* Traverse_LinkList(struct node* head)
{
	struct node* point=head;
	do
	{
		printf("%d\t",point->num);
		point=point->next;
	}while(point!=head);
	putchar(10);
	return head;
}



struct node* FindNode_LinkList(struct node* head,int i)
{
	struct node* point;
	point=head;
	int count=0;
	while(point!=NULL)
	{
		count++;
		if(point->num==i)
		{
			printf("%d,第%d个结点\n",i,count);
			break;
		}
		else
		{
			point=point->next;
			if(point==head)
			{
				printf("Not Found Point !\n");
				break;
			}
		}
	}

	return head;
}





int main()
{
	FindNode_LinkList(Traverse_LinkList(Create_LinkList(8)),2);
	return 0;
}


