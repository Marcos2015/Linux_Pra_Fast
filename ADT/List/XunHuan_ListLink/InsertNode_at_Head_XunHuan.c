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



/*    插入节点到链表头部前面 */
struct node* insert(struct node* old_link)
{
    struct node* current,*head;
    struct node* new_point=(struct node*)malloc(sizeof(struct node));
    new_point->num=103;
    new_point->next=old_link;
    current=head=old_link;

    while(current->next != old_link)
    {
	current=current->next;
    }; //因为是环形链表，使用while使当前节点跑到链表尾最后一个节点，然后让尾节点指向新插入的节点.

    current->next=new_point;//让尾节点指向新节点
    head=new_point;//头指针指向新节点
}





int main()
{
    	struct node* p=create(10);
	foreach(insert(p));


    return 0;
}


