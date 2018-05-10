#include <iostream>
using  namespace std;



struct box
{
	char maker[40];
	float height;
	float length;
	float width;
	float volume;
};


int  struct_Multiplication(box* box_pointer)
{	
	box_pointer->volume=(box_pointer -> height)*(box_pointer -> length)*(box_pointer -> width);
		cout << box_pointer -> volume << endl;

return box_pointer->volume;

}

void struct_show(box t)
{
	cout << t.maker << endl;
	cout << t.height << endl;
	cout << t.width << endl;
	cout << t.volume << endl;
return;
}


typedef void  (*p) (box t);
typedef void  (*q) (box* box_pointer);


/*
viod test(void (*p) (box t),void (*q) (box* box_pointer) )
{
	
void  (*p) (box t);
void  (*q) (box* box_pointer)

	
return;
}

*/	
	

int main()
{
	struct box tr={"hello",1,4,7,11};
	struct_Multiplication(&tr);
return 0;
}

