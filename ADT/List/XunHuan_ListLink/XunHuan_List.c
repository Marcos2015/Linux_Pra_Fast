#include <stdio.h>
#include <stdlib.h>


struct node
{
    int num;
    struct node* next;
};


struct node* create(int n) //生成循环链表
{
    struct node* ptr,*head,*point;
    point=ptr=head=NULL;
    int i=10;
    for(i=0;i<n;++i)
    {
        point=(struct node*)malloc(sizeof(struct node));
	point->num=i;
	if(i==0)
	{
	    head=point;
	}
	else
	{
	    ptr->next=point;
	}
	ptr=point;
	point->next=NULL;
    }

    point->next=head; //让尾指针指向头节点，实现首尾相连的环形.
    return head;
}




struct node* foreach(struct node* head) //遍历循环链表
{
    struct node* point;
    point=head;
    do
    {
	printf("%d\t",point->num);
	point=point->next;
    }while(point!=head);
	putchar(10);
    return head;
}



/*    插入节点到链表头部前面
struct node* insert(struct node* old_link)
{
    struct node* current,*head;
    struct node* new_point=(struct node*)malloc(sizeof(struct node));
    new_point->next=old_link;
    current=head=old_link;

    while(current->next != old_link)
    {
	current=current->next;
    }; //因为三环形链表，使用while使当前节点跑到链表尾最后一个节点，然后让尾节点指向新插入的节点.

    current->next=new_point;//让尾节点指向新节点
    head=new_point;//头指针指向新节点
}

*/



struct node* node_find(struct node* head,int i)//寻找循环链表的节点
{
    struct node* p;
    p=head;

    while(p!=NULL)
    {
	if(p->num == i)
	{
	    printf("%d\t,%d\n",p->num,i);
	    break;
	}
	else
	{
	    p=p->next;
	    if(p->next==head)
	    {
		p==NULL;
	    }
	}
    }


    
//用for循环查找节点的写法比较麻烦
//此for循环除了0这个节点，其他节点都很容易找到，但是，之所以能找到0这个节点，是因为一开始p=p->next，在后续递进关系中p=p->next，当走到节点9的时候，由于递进关系以及循环链表的原因，p就又走回到了head这个节点上面，所以能查找到0这个节点。
/*			
		for(p=p->next;p!=head && p->num!=i;p=p->next)
		{
		    printf("%d\n",p->num);
		}
		
		//for循环首先赋值初始条件p=p->next,然后在判断p!=head && p->num!=i,当满足这个条件之后，才会执行循环体.	
		
			if(p->num==i)
			{
			        printf("%d\t,%d\n",i,p->num);
			}
   			 if(p->next==head)
    		 	 {
			     printf("no this number\n");
				p=NULL;
    		 	 }
*/


/*
    for( ;p!=head && p->num !=i;p->next)  //for循环会先判断第二个条件，如果条件不成立，则不会执行循环体.
    {
	printf("%d\n",p->num);
    }
*/

    return p;
}


int main()
{
    	struct node* p=create(10);
	foreach(p);
	node_find(p,0);


    return 0;
}


