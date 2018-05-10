#ifndef DOUBLY_LINKED_LIST
#define DOUBLE_LINKED_LIST

template <class T>
class DLLNode
{
    public:
	DLLNode()
	{
	    next=prev=0;
	}

	DLLNode(const T& el,DLLNode *n=0,DLLNode* p=0)
	{
	    info=el;//外部变量初始化内部节点的数据
            next=n;//外部指针初始化后驱指针
	    prev=p;//外部指针初始化前驱指针
	}

	T info;
	DLLNode* prev,*next;
};



template <class T>
class DoublyLinkList
{
publice:
	DoublyLinkList()
	{
	    head=tail=0;
	}

	void addToDLLTail(const T&)
	T deleteFromDLLTail();

protect:
	DLLNode<T> *head,*tail;
};




template<class T>
void DoublyLinkList<T>::addToDLLTail(const T& el)
{
    if(tail!=0)
    {
	tail=new DLLNode<T>(el,0,tail);
	tail->prev->next=tail;
    }
    else
    {
	head=tail=new DLLNode<T>(el);
    }

}

template<class T>
T DoublyLinkList<T>::deleteFromDLLTail()
{
    T el=tail->info;
    if(head==tail)
    {
	delete head;
	head=tail=0;
    }
    else
    {
	tail=tail->prev;
	delete tail->next;
	tail->next=0;
    }
    return el;
}

#endif

