#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct student
{
    char name[10];
    int  age;
};

typedef struct student  struct_student;
typedef struct_student* struct_student_link;

int main()
{
	struct_student_link p=(struct_student_link)malloc(sizeof(struct_student));
	
		if(!p)
		{
		    exit(OVERFLOW);
		}

	printf("pls input name:\n");
	scanf("%s",p->name);
	printf("pls input age:\n");
	scanf("%d",&p->age);


	printf("%s\t",p->name);
	printf("%d\n",p->age);

	free(p);
return 0;
}




