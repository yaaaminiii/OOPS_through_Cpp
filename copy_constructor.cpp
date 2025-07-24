#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int cgpa;
	student(string s,int c)
	{
		name=s;
		cgpa=c;
	} 
//copying a constructor
        student(student &s)
	{
		name=s.name;
		cgpa=s.cgpa;
	}
	void getinfo() 
	{
		cout<<name<<" "<<cgpa<<endl;
	}
};
int main()
{
	student s("yamini",9.0);
	s.getinfo();
	student s1(s);//by default it automatically copies the constructor 
	s1.getinfo();
}
