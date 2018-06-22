#include <stdlib.h>

struct node
{
	int num;
	struct node* point;
}stu;



struct node* create(int n)
{
	for(int i;i<n;i++)
	{
		struct node* p1=(struct node*)malloc(struct node);
		p1->num=i;

