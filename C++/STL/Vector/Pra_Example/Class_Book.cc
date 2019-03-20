#include <iostream>
#include <vector>
#include <string>
using namespace std;


class book
{
    public:
	string no_book;
	string name_book;
	string publi_book;


	book(string book,string name,string publi):no_book(book),name_book(name),publi_book(publi){}

};



class writer
{
    public:
	string no_writer;
	string name_writer;
	string publi_writer;

	writer(string no,string name,string publi):no_writer(no),name_writer(name),publi_writer(publi){}

	vector<book>book_writer;

	void add_book(book& d)
	{
		book_writer.push_back(d);
	}

};


class writer_collect
{
	public:
		vector<writer>vector_writer;

	void add_writer(writer& q)
	{
		vector_writer.push_back(q);
	}


};


int main()
{
	book b1("1","sanguoyanyi","public");
	book b2("2","hongloumeng","public");
	book b3("3","shuihuzhuan","publuc");

	writer w1("101","zhangsan","public");
	writer w2("102","lisi","public");
	writer w3("103","wangwu","public");

	w1.add_book(b1);
	w2.add_book(b2);
	w3.add_book(b3);

	writer_collect T;
	T.add_writer(w1);
	T.add_writer(w2);
	T.add_writer(w3);

return 0;
}


