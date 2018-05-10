//#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node* next;
};


struct node* create(int i) //生成链表
{
    struct node* head,*p1;

    p1=head=NULL;
    int a=0;
    for(;a<i;a++)
    {
	struct node* point=(struct node*)malloc(sizeof(struct node));
	if(!point)exit(0);

	point->num=a;
	if(0==a)
	{
		head=point;
	}
	else
	{
	    p1->next=point;
	}
	p1=point;
   	point->next=NULL;
    }
        //point->next=head; 环形链表就要这一步，否则不需要.
    return head;
}




struct node* node_find(struct node* po) //寻找特定节点
{
    	int find_num=0;
    	printf("please input you need find number:0-8!\n");
		scanf("%d",&find_num);

	for(;po!=NULL && po->num != find_num ; po=po->next);
	if(po->num==find_num)
	{
		printf("%d\n",po->num);
	}
	    return po;
}


struct node* dele_node(struct node* head,int i) //删除特定节点
{
    // bool bret=false;
    if(head) //如果不是空链表，执行下列删除步骤
    {
    	struct node* prev,*next;
	prev=next=head;

	while(prev!=NULL && prev->num != i ) //循环结束之时，prev指向的节点就是所要需要删除的节点.而next指针则在prev之后跟随.
   	 {
		next=prev;
		prev=prev->next;
    	 }


	if(prev->num==i)
	{
	    if(prev==head) //如果需要删除的节点是头结点
	    {
		
		head=prev->next;
	    }
	/*    else if(prev->next==NULL)
	    {
		next->next=NULL;
	    }
	 */
	    else           //如果需要删除的节点是中间节点或者是最后一个节点
	    {
		next->next=prev->next;
	    }
	    free(prev);
	//	return head;
	}
		return head;
    }
    return -1; //如果是空链表，直接返回错误
}





struct node* node_dele_listlink(struct node* head) //删除整个链表
{
    struct node* p,*point;
    for(point=head;point!=NULL;free(p))//循环遍历完之后，P会作为最后一个结点被删除，而Point会被赋值为NULL（point=point->next)，所以删除链表需要用Point!=NULL这个条件。
    {
		p=point;
    		point=point->next;
    }

   /*
	while(head!=NULL)
	{
	    p9=head;
	    ptr=head->next;
	    free(p9);
	}

*/
    return point;

}




struct node* insert_node(struct node* head,struct node* p) //插入一个节点
{
    struct node* p1,*p2;
    p1=head;

    if(!head)//如果是空链表
    {
	head=p;
	p->next=NULL;
	return head; //add new
    }
    else  //如果不是空链表
    {
	while(p->num > p1->num && p1!= NULL)//当P1遍历到最后一个节点时，P2在倒数第二个节点，如果用P1!=NULL,那么P2就到了最后一个节点，而P1则去了最后一个结点后面的下一个位置，且P1=NULL，发生错误； 而只能使用p1->next1=NULL;因为如果使用p1!=NULL;则最后一轮循环p2会与P1指向最后一个节点.p1->next!=NULL,则P1指向最后一个节点，P2指向倒数第二个节点. 
	    //遍历一个链表使用P1!=NULL,而如果要两根指针一前一后在最后倒数两个节点，则使用P1->next！=NULL;
	{
	    p2=p1;
	    p1=p1->next;
	}

	if(p->num <= p1->num) //如果P1节点比P节点小的时候 .

	    /*必须用<=，因为上一个循环while中，P1通过循环走到的节点必定不小于P(若大于P节点则不会走下去，所以，P1节点的值必定等于P节点。那么如果使用P->num < P1->num的话，那么不会继续执行if下的语句，只会执行else的语句：
	    P1->next=p;
	    P->next=NULL;
	    这样的话加入的节点的指针域指向NULL，而不是指向原有的后续节点，这就是为什么使用p->num < p->num之后；链表在加入该节点后已经指向NULL，后续的节点已经失掉了。所以必须要用<=符号：p->num <= p1->num;这样加入的节点就可以指向后续的原有节点。
	    */
	{
	    if(head==p1) //如果P1循环后只到达头结点，即：所需要插入的节点比头结点还小，那么就插入在头节点前面
	    {
		head=p; //头结点指向新节点P
		p->next=p1; //新节点指向原有的头头结点，因为之前head=p1.
		//p1->next=NULL; 不可以，这样的话原有头节点就不指向后续节点.
	    }
	    else //如果插入节点的大于P2，小于或等于P1，那么就插入在P2与P1之间
	    {
		p2->next=p;
		p->next=p1;
	    }
       	}
	else //如果P节点比P1还要大,就插入在P1节点后面
	{
		p1->next=p;
		p->next=NULL;
	}
    }
    /*
    while(head!=NULL)
    {
	printf("%d\t",head->num);
	head=head->next;
    }
    */
    //printf("\n");
    return head;
}

   
    
void show_node(struct node* head) //遍历链表
{
    struct node* foreach;
    for(foreach=head;foreach!=NULL;foreach=foreach->next)// 遍历链表用foreach!=NULL.
    {
	printf("%d\t",foreach->num);
    }
	putchar(10);
	
/*                             //环形链表的遍历
   struct node* foreach;
    foreach=head;
   do
   {
        printf("%d\t",foreac->num);
	foreach=foreach->next;
   }while(foreach!=head);

*/


}





struct node* invert_node(struct node* x)//反转链表
{
    struct node* p,*q,*r;
    p=x;
    q=NULL;
    while(p!=NULL)
    {
	r=q;
	q=p;
	p=p->next;
	q->next=r;
    }

return q;
}











int main()
{
    struct node* pp=create(9);
//	foreach(pp);
//	node_find(pp);
//	dele_node(pp,6);

    	show_node(pp);
	printf("\n");


	struct node* po=(struct node*)malloc(sizeof(struct node));
	po->num=-9;
	struct node* test=insert_node(pp,po);
		printf("\n");
	show_node(test);

	struct node* point=dele_node(test,7);
	show_node(point);


	struct node* ptr=node_dele_listlink(point);
	show_node(ptr);


/*
	struct node* invert_ptr=invert_node(ptr);
	show_node(invert_ptr);
*/

return 0;
}



