#include <iostream>
#include <vector>
#include <string>
using namespace std;


class student
{
    public:
	    string No_student;
	    string Name_student;
	    string Sex_student;
	    string BirthDay_student;
    public:
	    student(string m_No_student,string m_Name_student,string m_Sex_student,string m_BirthDay_student):
		    No_student(m_No_student),
		    Name_student(m_Name_student),
		    Sex_student(m_Sex_student),
		    BirthDay_student(m_BirthDay_student){}


	    void display()
	    {
		cout << No_student << "\t" << Name_student << "\t" << Sex_student << "\t" << BirthDay_student << "\t" ;
	    }
};



class student_collect
{

	private:
		vector<student>m_student;
	public:
		void add(student& s)
		{
			m_student.push_back(s);
		}

		student* find(string N_student)
		{     
			int i;
			bool flag=false;

			for(i=0;m_student.size();i++)
			{


				/*
				if(N_student==m_student[i].No_student)
				{
					flag=true;
					break;
				}
				*/

				
				student &d=m_student.at(i);
				if(N_student==d.No_student)
				{
					flag=true;
					break;
				}
				

			}

			student* f=NULL;

			if(flag==true)
			{
				f=&m_student[i];
			}

			return f;
		}

};





int main()
{
	student s1("1","zhangsan","male","9.8");
	student s2("2","lisi","female","7.7");
	student s3("3","wangwu","male","1.7");
	student s4("4","zhaofeng","male","6.9");


	student_collect w;
	w.add(s1);
	w.add(s2);
	w.add(s3);
	w.add(s4);


	student * y=w.find("3");
	y->display();
	    putchar(10);
return 0;
}










