#include <iostream>
#include <vector>
using namespace std;


class A
{
	    public:
		    int n;
	    public:
		    A(int n)
		    {
			    this->n=n;
		    }
};



int main()
{
	vector<A> ca_vec;
	A a1(1);
	A a2(2);

	ca_vec.push_back(a1);
	ca_vec.push_back(a2);

	int nSize=ca_vec.size();

	for(int i=0;i<nSize;i++)
	{
		cout << ca_vec[i].n<< endl;
	}




	for(int i=0;i<nSize;i++)
	{
		A& a=ca_vec.at(i);
		cout << a.n << endl;
	}




	vector<A>::iterator ca_vec_iter=ca_vec.begin();
	while(ca_vec_iter!=ca_vec.end())
	{
		//cout << (*ca_vec_iter).n << endl;
		//ca_vec_iter++; 和下面两行代码效果一样
		cout << ca_vec_iter->n << endl;
		ca_vec_iter++;
	}


	/* ******************************************************** */

	vector<A*>pca_vec;
	A* pa1=new A(1);
	A* pa2=new A(2);

	pca_vec.push_back(pa1);
	pca_vec.push_back(pa2);
	int Size=pca_vec.size();

	for(int i=0;i<Size;i++)
	{
		cout << pca_vec[i]->n << endl;
	}



	for(int i=0;i<Size;i++)
	{
		A*& h=pca_vec.at(i); //at(i)返回的是一个引用,而vector存储的是指向A类的指针,即返回的是"指针的引用",那么A*代表类型,&为引用,联合起来就是(A*)类型的引用(A*)& .
				     //并非是取地址的意思,而是引用的意思.
		cout << h->n << endl;
	}




	vector<A*>::iterator L=pca_vec.begin();

	while(L!=pca_vec.end())
	{
		cout << (*L)->n << endl;
		L++;
	}


	


	delete(pa1);
	delete(pa2);


return 0;
}

	
