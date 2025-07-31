#include<iostream>
using namespace std;
//nested classes 
//inner class is a member of outer class 
/* inner class can access only static members of the outer class
  outer class cannot access the private members of the inner class*/
class bank{
	public:
		class locker{
			public:
				void show(){
					cout<<"acccess my locker"<<endl;
				}	
		};
};
int main()
{
	bank::locker obj;
	obj.show();
}
