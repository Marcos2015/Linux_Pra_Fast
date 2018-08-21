#include <iostream>
using namespace std;


int main()
{
	int stu[3][3],gra[3];
	int sum=0;

	for(int i=0;i<3;i++)
	{
		for(int k=0;k<3;k++)
		{
			cin>>stu[i][k];
			sum+=stu[i][k];
		}
			gra[i]=sum/3;
			sum=0;
	}





	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << stu[i][j] << "\t";
		}
		cout << "gra=" << gra[i] << endl;
	}

	return 0;
}



