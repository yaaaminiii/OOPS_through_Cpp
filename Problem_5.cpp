#include<iostream>
using namespace std;
class employee{
	private:
		int salary;
		int emp_id;
	public:
		string name;
		string department;
	employee(int s,int e,string n,string d)
	{
		salary=s;
		emp_id=e;
		name=n;
		department=d;
	}
	void setsalary(double s)
	{
		salary=s;
	}
	double getsalary()
	{
		return salary;
	}
	void displaydetails()
	{
		cout<<"salary:"<<salary<<endl;
		cout<<"emp_id:"<<emp_id<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"department:"<<department<<endl;
	}
};
int main()
{
	employee e(250000,12,"yamini","sales");
	e.displaydetails();
	e.setsalary(50000);
	cout<<"updated salary\n"<<e.getsalary()<<endl;
}
