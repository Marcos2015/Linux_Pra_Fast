#ifndef	INT_LINKED_LIST
#define INT_LINKED_LIST
//node classs : include node's information 
class IntSLLNode
{
  public:
	IntSLLNode()
	{
		next = 0;
	}

	IntSLLNode( int el, IntSLLNode* ptr = 0)
	{
		info = el;
		IntSLLNode * next = ptr;
	}

	int info;
	IntSLLNode * next;
};

class IntSLList
{
    public:
	    IntSLList()
	    {
		    head = tail = 0;
	    }
	    ~IntSLList();

	    int isEmptry()
	    {
		    return head == 0 ;
	    }
	    int hh(); 
	    void addToHead(int);
	    void addToTail(int);
	    int deleteFromHead();
	    int deleteFromTail();
	    void deleteNode(int);
	    bool isInList(int) const;
    private:
	    IntSLLNode* head ,*tail;
};


#endif




