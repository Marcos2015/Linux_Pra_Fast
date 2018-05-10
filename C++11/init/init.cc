#include <vector>
#include <iostream>


class Foo
{
public:
	Foo(std::initializer_list<int>){}
};




class FooVector
{
	std::vector<int> content_;
public:
	FooVector(std::initializer_list<int> list)
	{
		for(auto it=list.begin();it != list.end();++it)
		{
			  content_.push_back(*it);
				std::cout << *it << std::endl;
		}
	}
};


struct ST
{
	int x;
	double y={2.4};
};





int main()
{
	Foo foo{1,2,3,4,5,6,7};
	FooVector Foo_vector_1={1,23,57};
return 0;
}



