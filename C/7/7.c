#include <stdio.h>

int main()
{
	int PO=0;
	printf("please input a number:\n");
		scanf("%d",&PO);
		
	int PO1=PO/20;
	int PO2=(PO-PO1*20)/10;
	int PO3=(PO-PO1*20-PO2*10)/5;
	int PO4=(PO-PO1*20-PO2*10-PO3*5)/1;

	printf("$20 bills:%d\n",PO1);
	printf("$10 bills:%d\n",PO2);
	printf("$5  bills:%d\n",PO3);
	printf("$1  bills:%d\n",PO4);

return 0;
}



