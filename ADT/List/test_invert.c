#include <stdio.h>


struct node
{
    int num;
    struct node* next;
};


link invert(struct node* x)
{
    struct node* p,q,r;
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


