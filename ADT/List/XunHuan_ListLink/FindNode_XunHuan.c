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




struct node* traverse(struct node* head) //遍历循环链表
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







struct node* find_node(struct node* head,int i)//寻找循环链表的节点
{
    printf("need to find node is: %d\t\n",i);
    struct node* p;
    p=head;
    int count=0;

    while(p!=NULL)
    {
	count++;
	if(p->num == i)
	{
	    printf("%d,第%d个结点\n",i,count);
	    break;
	}
	else
	{
	    p=p->next;
	    if(p->next==head)
	    {
		printf("Not Found the Point!\n");
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
	traverse(p);
	find_node(p,5);

    return 0;
}


