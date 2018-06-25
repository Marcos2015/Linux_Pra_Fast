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





int main()
{
    	struct node* p=create(10);
	foreach(p);


    return 0;
}


