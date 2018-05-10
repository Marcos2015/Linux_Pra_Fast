#include <stdio.h>

int main()
{
    int quantity;
    printf("please input number:quantity\n");
    scanf("%d",&quantity);
	printf("quantity=%d\n",quantity);


    int price=0;
    printf("please input number:price\n");
    scanf("%d",&price);
    	printf("price=%d\n",price);


	char *test_char;//because test_char no give space,if use input give to it,will happen undefine.
	printf("input string.......\n");
	scanf("%s",test_char);
	//printf("%s\n",test_char);
	puts(test_char);
return 0;
}



