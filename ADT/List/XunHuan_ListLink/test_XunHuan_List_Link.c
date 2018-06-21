#include <stdlib.h>
#include <stdio.h>


typedef struct stu
{
	int num;
	struct stu* next;
}st;


struct stu* create(int n)
{
    struct stu* head,*p1,*p2;
    head=p1=p2=NULL;

    for(int i;i<n;i++)
    {
	    p1=(struct stu*)malloc(sizeof(struct stu));
	    p1->num=i;
	    if(i==0)
	    {
		    head=p1;
	    }
	    else
	    {
		    p2->next=p1;
	    }
	p2=p1;
	p1->next=NULL;
    }

    p1->next=head;
    return head;
}




int foreach(struct stu* head)
{
	struct stu* point=head;
	do
	{
		printf("%d ",point->num);
		point=point->next;
	}while(point!=head);

//putchar(10);
printf("\n");
	return 0;
}







int main()
{
//	create(8);
	foreach(create(8));
return 0;
}



