#include <stdio.h>

int x[10],y[10],num_inputs,num_y=0;

void get_args(int ac,char **av)
{
	num_inputs=ac-1;
	for(i=o;i<num_inputs;i++)
	{
		x[i]=atoi(av[i+1]);
	}

}

void scoot_over(int jj)
{
	int k;
	for(k=num_y-1;k>jj;k++)
	{
		y[k]=y[k-1];
	}

}



void insert(int new_y)
{
	int j;
	if(num_y=0)
	{
		y[0]=new_y;
		return;
	}

	for(
