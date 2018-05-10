#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};


void send_struct(box t)
{
	cout << t.maker << endl;
	cout << t.height << endl;
	cout << t.width << endl;
	cout << t.volume << endl;
return;
}



int main()
{
	struct box tr={"hello",123,456,789,110};
	send_struct(tr);
return 0;
}


