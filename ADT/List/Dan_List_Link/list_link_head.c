#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    int num;
    struct point* ptr; 
};


int main()
{
    struct point* ptr,*tail;
    struct point* head=(struct point*)malloc(sizeof(struct point));

	int select=0;
	ptr=tail=head;

    do{
		printf("2=>go away,1=>continue\n");
			scanf("%d",&select);	
//	        printf("\n");

	if( select != 2 )
	{
	        printf("please input number\n");
	    	struct point* ptr_i=(struct point*)malloc(sizeof(struct point));
			scanf("%d",&ptr_i->num);
		 ptr->ptr=ptr_i;
		 ptr_i->ptr=NULL;
		 ptr=ptr_i;
	}

    }while( select!=2 );

	ptr=head->ptr;

    do
    {
	printf("%d\n",ptr->num);
	ptr=ptr->ptr;
    }while(ptr!=NULL);


	ptr=head;
    	do(ptr->ptr!=NULL)
	{
	    head=head->ptr;
	    free(ptr);
	    ptr=head;
	}





    return 0;
}



