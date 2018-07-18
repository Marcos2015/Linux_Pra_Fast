#include <stdlib.h>
#include <stdio.h>

struct node
{
	int num;
	struct node* previous;
	struct node* next;
};


struct node* Create_ShuangXiang_ListLink(int n)
{
	struct node* previous,*next,*head,*current;
	previous=next=head=current=NULL;

	for(int i=0;i<n;i++)
	{

		current=(struct node*)malloc(sizeof(struct node));
		current->num=i;
		if(i==0)
		{
			head=current;
			current->previous=NULL;
		}
		else
		{
			current->previous=previous;
			previous->next=current;
		}
		previous=current;
		current->next=NULL;
	}
		current->next=head;//双向循环链表就需要加上这一句,如果不加就仅仅是双向链表而已
		head->previous=current;
putchar(10);
		return head;
}



struct node* Traverse_ShuangXiang_ListLink(struct node* head)
{
	struct node* p=head;
	
	do{
		printf("%d\t",p->num);//如果使用p->next!=head;那么将不会打印最后一个节点,意即:当p的下一个节点是head时,则不会printf.
		p=p->next;
	}while(p!=head);//在双向链表中,如果需要指针跑到最后一个节点,
	                //一般会使用
			/* while(current->next!=head)current=current->next;*/
			//使用current->next!=head,而不是使用current!=head这个条件.

	
	putchar(10);
return head;
}







struct node* Find_From_Head(struct node* head,int i)
{
	struct node* p=head;
	while(p->next != NULL )
	{
		if(p->num==i)
		{
			printf("Find this node: %d\n",p->num);
			break;
		}
		else
		{
			p=p->next;
			if(p==head)
			{
				printf("Not Find point: \n");
				break;
			}
		}
	}
	return p;
}




struct node* Find_No_Sort(struct node* head,int i) // 查找双向链表节点的通用算法
{
	struct node* p=head;
	while(p->next!=head)
	{
	    if(p->num==i)
	    {
		    printf("Find this point is:%d\n",p->num);
		    break;
	    }
	    else
	    {
		    p=p->next;//可以使指针p跑到链表最后一个节点的后一个位置
		              //即NULL(由于最后一个节点在生成的时候current->next=NULL)
			      //所以双向链表的最后一个节点的后一位置是NULL)
	    }

	}

	//之所以p==NULL,是因为上面的代码已经让p循环跑到链表的
		    //最后,由于之前代码p=p->next,会使代码直到跑到链表最后
		    //一个节点的后面(即NULL)
	
		//p=head;

		if(p->next==head)
		{
			p=head;
		    while(p != head)
		    {
			if(p->num==i)
			{
				printf("find point:%d\n",p->num);
				break;
			}
			else
			{
				p=p->previous;
			}
		    }
		if(p==head)printf("Not Find Point\n");
		//if(p==NULL)printf("Not Find point!\n");
	}

return p;

}
	


struct node* Find_Is_Sort(struct node* head,int i)
{
	struct node* p=head;
	while(p!=NULL)
	{
		if(p->num==i) 
		{
			printf("Find This Point:%d\n",p->num);
			break;
		}
		else
		{
			if( p->num < i  )  // 如果写成p->num > i,就会导致p指针在0
				           //和6两个节点之间不断死循环
					   //eg: p->num > i,
					   //指针会向后退一位到6,然后再次进入循环时
					   //又会回到第一次给节点的指针位置,死循环
			{
				p=p->next;
			}
			else
			{
			    p=p->previous;
			}
			    if( p==head )
			    {
				    printf("Not Find Point\n");
				    break;
			    }
		}
	}

	return p;
}







int main()
{

	struct node* k=Create_ShuangXiang_ListLink(7);
	Traverse_ShuangXiang_ListLink(k);
	printf("-------------\n");
//	Find_From_Head(k,9);
	Find_No_Sort(k,90);
//	Find_Is_Sort(k,19);
	return 0;

}


