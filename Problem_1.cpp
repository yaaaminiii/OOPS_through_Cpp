#include<iostream>
using namespace std;

	class student{
		private:
			int roll_no;
			int marks;
	    public:
	    	string name;
	    	string branch;
//constructor
	    student(int r,int m,string n,string b)
	    {
	    	roll_no=r;
	    	marks=m;
	    	name=n;
	    	branch=b;	
		}
//setters and getters
		void setmarks(int m)
		{
			marks=m;}
		int getmarks()
		{
			return marks;}
		void displaydetails()
		{cout << "Student Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
		}
	};
	int main()
	{
		student s1(1,99,"yamini","cse");
		s1.displaydetails();
		s1.setmarks(98);
		cout<<"updated_marks"<<s1.getmarks()<<endl;
	}

