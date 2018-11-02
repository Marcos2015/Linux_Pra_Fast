#include <stdlib.h>
#include <stdio.h>

typedef struct STACK_st{
	void** ppBase;
	unsigned int uTop;
	unsigned int uStackSize;
}STACK;



STACK * Stack_Create(unsigned int  uStackSize)
{
	STACK* pStack;
	if(pStack == 0 )
	{
		return NULL;
	}




pStack=(STACK*)malloc(sizeof(struct STACK_st));
		if(pStack != NULL )
		{
			pStack->ppBase=(void**)malloc(uStackSize * sizeof(void*));
			if(pStack->ppBase==NULL);
			{
				free(pStack);
				pStack==NULL;
			}
		}
		else
		{
			pStack->ppBase[0]=NULL;
			pStack->uTop=0;
			pStack->uStackSize=uStackSize;
		}


		return pStack;
}



int main()
{
	Stack_Create(90);
	return 0;
}



