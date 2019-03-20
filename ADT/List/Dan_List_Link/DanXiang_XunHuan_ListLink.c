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
		//current->next=head;//双向循环链表就需要加上这一句,如果不加就仅仅是双向链表而已
		//head->previous=current;
putchar(10);
		return head;
}



struct node* Traverse_ShuangXiang_ListLink(struct node* head)
{
	struct node* p=head;
	
	do{
		printf("%d\t",p->num);//如果使用p->next!=head;那么将不会打印最后一个节点,意即:当p的下一个节点是head时,则不会printf.
		p=p->next;
	}while(p!=NULL); //指针跑到链表最后一个节点.但是该指针最后停留在最后一个节点的后面.

			//在双向链表中,如果需要指针跑到最后一个节点,
	                //一般会使用
			/* while(current->next!=head)current=current->next;*/
			//使用current->next!=head,而不是使用current!=head这个条件.

	
	putchar(10);
return head;
}




struct node* Find_No_Sort(struct node* head,int i) // 查找无序双向链表节点的通用算法
{
	struct node* p=head;
	while(p!=NULL)
	{
	    if(p->num==i)
	    {
		    printf("Find this point is:%d\n",p->num);
		    break;
	    }
	    else
	    {
		    p=p->next;
		              
			      
	    }

	}


		if(p==NULL)
		{
			p=head;
		    while(p != NULL )
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
		if(p==NULL)printf("Not Find Point\n"); //不可以使用p==head,因为找不到这个元素的话,那么在上面的while循环就已经遍历过了head,最后p会跑到head前面去.
		//if(p==NULL)printf("Not Find point!\n");
		}

return p;

}
	



int main()
{

	struct node* k=Create_ShuangXiang_ListLink(7);
	Traverse_ShuangXiang_ListLink(k);
	printf("-------------\n");
	Find_No_Sort(k,80);
	return 0;

}


