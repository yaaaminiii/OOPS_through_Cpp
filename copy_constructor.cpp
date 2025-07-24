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
	void getinfo() 
	{
		cout<<name<<" "<<cgpa<<endl;
	}
};
int main()
{
	student s("yamini",9.0);
	s.getinfo();
	student s1(s);
	s1.getinfo();
}
