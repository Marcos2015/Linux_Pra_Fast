#include <vector>
#include <iostream>
using namespace std;

class A
{
};

typedef vector<int> INT_VECT;
typedef vector<float> FLOAT_VECT;
typedef vector<A> CA_VECT;
typedef vector<A*> CPA_VECTOR;

int main(int argc,char** argv)
{
	INT_VECT int_ect;
	FLOAT_VECT float_vect;
	CA_VECT ca_vect;
	CPA_VECTOR cpa_vector;

	cout <<"init successful"<<endl;
return 0;
}



