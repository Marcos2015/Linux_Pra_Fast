#include <stdlib.h>
#include <stdio.h>

struct node
{
	int num;
	struct node* previous;
	struct node* next;
};


struct node* Create_ShuangXiang_ListLink(int n)
{
	struct node* previous,*next,*head,*current;
	previous=next=head=current=NULL;

	for(int i=0;i<n;i++)
	{

		current=(struct node*)malloc(sizeof(struct node));
		current->num=i;
		if(i==0)
		{
			head=current;
			current->previous=NULL;
		}
		else
		{
			current->previous=previous;
			previous->next=current;
		}
		previous=current;
		current->next=NULL;
	}
		current->next=head;//双向循环链表就需要加上这一句,如果不加就仅仅是双向链表而已
		head->previous=current;
putchar(10);
		return head;
}



struct node* Traverse_ShuangXiang_ListLink(struct node* head)
{
	struct node* p=head;
	
	do{
		printf("%d\t",p->num);//如果使用p->next!=head;那么将不会打印最后一个节点,意即:当p的下一个节点是head时,则不会printf.
		p=p->next;
	}while(p!=head);//在双向链表中,如果需要指针跑到最后一个节点,
	                //一般会使用
			/* while(current->next!=head)current=current->next;*/
			//使用current->next!=head,而不是使用current!=head这个条件.

	
	putchar(10);
return head;
}







struct node* Find_From_Head(struct node* head,int i)
{
	struct node* p=head;
	while(p->next != NULL )
	{
		if(p->num==i)
		{
			printf("Find this node: %d\n",p->num);
			break;
		}
		else
		{
			p=p->next;
			if(p==head)
			{
				printf("Not Find point: \n");
				break;
			}
		}
	}
	return p;
}




struct node* Find_No_Sort(struct node* head,int i) // 查找无序双向链表节点的通用算法
{
	struct node* p=head;
	while(p->next!=head)
	{
	    if(p->num==i)
	    {
		    printf("Find this point is:%d\n",p->num);
		    break;
	    }
	    else
	    {
		    p=p->next;//可以使指针p跑到链表最后一个节点的后一个位置
		              //即NULL(由于最后一个节点在生成的时候current->next=NULL)
			      //所以双向链表的最后一个节点的后一位置是NULL)
	    }

	}

	//之所以p==NULL,是因为上面的代码已经让p循环跑到链表的
		    //最后,由于之前代码p=p->next,会使代码直到跑到链表最后
		    //一个节点的后面(即NULL)
	
		//p=head;

		if(p->next==head)
		{
			p=head;
		    while(p != head)
		    {
			if(p->num==i)
			{
				printf("find point:%d\n",p->num);
				break;
			}
			else
			{
				p=p->previous;
			}
		    }
		if(p==head)printf("Not Find Point\n");
		//if(p==NULL)printf("Not Find point!\n");
	}

return p;

}
	


struct node* Find_Is_Sort(struct node* head,int i)
{
	struct node* p=head;
	while(p!=NULL)
	{
		if(p->num==i) 
		{
			printf("Find This Point:%d\n",p->num);
			break;
		}
		else
		{
			if( p->num < i  )  // 如果写成p->num > i,就会导致p指针在0
				           //和6两个节点之间不断死循环
					   //eg: p->num > i,
					   //指针会向后退一位到6,然后再次进入循环时
					   //又会回到第一次给节点的指针位置,死循环
			{
				p=p->next;
			}
			else
			{
			    p=p->previous;
			}
			    if( p==head )
			    {
				    printf("Not Find Point\n");
				    break;
			    }
		}
	}

	return p;
}



struct node*  Delete_From_Head(struct node* head,int i)
{
	 int bret=0;
	if(head)  //非空链表
	{
	    struct node* p; //用于遍历
	    struct node* current;//用于指向当前节点
	    p=head;

	    while(p->num!=i && p->next!=NULL)
	    {
		current=p;
		p=p->next;
	    }
	    if(p->num==i)
	    {
		    if(p==head)
		    {
			    head=p->next;
		    }
		    else
		    {
			    current->next=p->next;
			    p->next->previous=current;//若缺少这句,则后一个节点
			                              //仍指向已被删除的节点.这一句
						      //作用就是让被删除节点的前一
						      //个节点的向后指针指向被删节点
						      //的前一个节点.
		    }
		    free(p);
		    bret=1;
	    }
	    }
	return head;
}





struct node* left_traverse(struct node* head)//向左遍历
{
	struct node* p=head;


	do
	{
		printf("%d\t",p->num);
		p=p->previous;
	}while(p!=head);
	putchar(10);
	return head;
}


	    




struct node* del_is_sort(struct node* head,int i)
{
	if(head)
	{
		struct node* p,*current;
		p=head;
		while(p->num != i && p->next != head )
		{
			current=p;
			if( i > p->num )
			{
				p=p->next;
			}
			else
			{
				p=p->previous;
			}
		}
		if(p->num == i )
		{
			if(p==head)
			{
				head=p->next;
			}
			else
			{
				current->next=p->next;
				p->next->previous=current;
			}

			free(p);
		}
	}
			return head;
}


		

struct node* del_no_sort(struct node* head,int i)  //无序双向循环链表删除
{
	struct node* current,*p;
	p=head;
	while(p->next!=head && p->num != i)
	{
		current=p;
		p=p->next;
	}

	if(p->num == i)
	{
		printf("Find this point:%d\t ",p->num );
		p->next->previous=current;
		current->next=p->next;
		putchar(10);
	}
	else
	{
	    printf("Not Find Point!\n");
	}

	free(p);


return head;
}




struct node* insert_ShuangXiang_ListLink(struct node* head,struct node* p)
{
	struct node* current,*p1;
	p1=head;
	if(!head) //如果是空链表
	{
		head=p;
		p->next=NULL;
		p->previous=NULL;
	}
	else
	{
		if(p->num > p1->num)
		{
			while(p->num > p1->num && p1!=head )
			{
				current=p1;
				p1=p1->next;
			}
			if(p->num < p1->num)//通过以上while循环可知道,无论如何,p1这个遍历节点都会在需要插入节点的右边. p1跑到p的位置发现p->num < p1->num(这是必然的)
			{
				if(p1==head) //如果遍历节点是头结点,那就说明需要插入的节点一开始就比head这个节点小,上面的while循环根本就没有运行
				{
				    head=p;
				}

				else
				{   
				    current->next=p;
				 //   p->previous=current;
				    p->next=p1;
				   // p1->previous=p;
				}
			}
			else //表示通过while循环后,需要插入的结点p大于遍历的节点p1; p->num > p1->num.把需要插入的节点插入到该链表的最后一个节点后面.
			{
				p1->next=p;
				//p->previous=p1;
				p->next=head;//通过之前的循环while,p1其实已经跑到双向循环链表的最后一个节点,但是发现仍小于p,那么就让p指向head节点,完成双向循环链接.
			}
		}
		else  //if(p1->num > p->num )
		{
			while(p1->num > p ->num && p1->next!=head)
			{
				current=p;
				p=p->previous;
			}
			if(p->num > p1->num )
			{
				if(head==p1)
				{
					head=p;
				}
				else
				{
				    current->previous=p;
				    //p->next=current;
				    p->previous=p1;
				//p1->next=p;
				}
			}
			else
			{
				p->next=p1;
				//p->previous=NULL;
				p1->previous=p;
			}
		}
	}

return head;
}







int main()
{

	struct node* k=Create_ShuangXiang_ListLink(7);
	Traverse_ShuangXiang_ListLink(k);
	printf("-------------\n");
//	Find_From_Head(k,9);
	Find_No_Sort(k,90);
//	Find_Is_Sort(k,19);
	struct node* test=Delete_From_Head(k,3);  //删除结点3
	Traverse_ShuangXiang_ListLink(test);
        left_traverse(test);	
	struct node* del=del_is_sort(k,5);        //删除结点5
	left_traverse(del);

	left_traverse(del_no_sort(k,9));          //删除结点9,但没有找到这个结点(本身不存在9这个结点)

	    struct node* l=(struct node*)malloc(sizeof(struct node));
	    l->num=10;
	    left_traverse(insert_ShuangXiang_ListLink(k,l));
//	Traverse_ShuangXiang_ListLink(insert_ShuangXiang_ListLink(k,l));
	    


	return 0;

}


