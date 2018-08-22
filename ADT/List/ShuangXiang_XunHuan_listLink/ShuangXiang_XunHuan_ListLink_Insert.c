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

struct node* left_traverse(struct node* head)//向左遍历
{
	struct node* p=head;


	do
	{
		printf("%d\t",p->num);
		p=p->previous;
	}while(p!=head);
	putchar(10);
	return head;
}


	    
		





struct node* insert_ShuangXiang_ListLink(struct node* head,struct node* p)
{
	struct node* current,*p1;
	p1=head;
	if(!head) //如果是空链表
	{
		head=p;
		p->next=NULL;
		p->previous=NULL;
	}
	else //非空链表,至少有一个结点
	{
		if(p->num > p1->num)  //插入结点大于遍历结点(实际就是头结点),向右循环.
		{
			while(p->num > p1->num && p1->next !=head ) //必须是p1->next != head,不能是p1 != head
			{
				current=p1;
				p1=p1->next;
			}
			if(p->num < p1->num)//通过以上while循环可知道,无论如何,p1这个遍历节点都会在需要插入节点的右边. p1跑到p的位置发现p->num < p1->num(这是必然的)
			{
				if(p1==head) //如果遍历节点是头结点,那就说明需要插入的节点一开始就比head这个节点小,上面的while循环根本就没有运行
				{
				    head=p;
				}
				else    //如果p1不是头结点,那么此时插入结点p小于p1,就要让current指向p,而p指向p1
				{   
				    current->next=p;
				    p->previous=current;  
				    p->next=p1;
				    p1->previous=p;
				}
			}
			else //表示通过while循环后,需要插入的结点p大于遍历的节点p1; p->num > p1->num.把需要插入的节点插入到该链表的最后一个节点后面.
			{
				p1->next=p;
				p->previous=p1;
				p->next=head;//通过之前的循环while,p1其实已经跑到双向循环链表的最后一个节点,但是发现仍小于p,那么就让p指向head节点,完成双向循环链接.
				head->previous=p;
			}
		}
		else  //if( p->num < p1->num )   插入结点小于遍历结点,向左循环
		{
		    /*
			while(p1->num > p ->num && p1->previous != head)
			{
				current=p1;
				p1=p1->previous;
			}
			if(p->num > p1->num )
			{
				if(head==p1)
				{
					head=p;
				}
				else
				{
				    current->previous=p;
				    p->next=current;
				    p->previous=p1;
				    p1->next=p;
				}
			}
			else
			{
				p->next=current;
				current->previous=p;
				p1->next=p;
				p->previous=p;
			}
		    */
			current=p1;
			p1=p1->previous;
			p1->next=p;
			current->previous=p;
			p->next=current;
			p->previous=p1;

		}
	}

return head;
}







int main()
{

	struct node* k=Create_ShuangXiang_ListLink(7);
	printf("向右遍历链表-------------\n");
	Traverse_ShuangXiang_ListLink(k);
	printf("向左遍历链表--------------\n");
	left_traverse(k);


	    struct node* l=(struct node*)malloc(sizeof(struct node));
	    l->num=-3;
	    left_traverse(insert_ShuangXiang_ListLink(k,l));
	 Traverse_ShuangXiang_ListLink(insert_ShuangXiang_ListLink(k,l));
	return 0;

}


