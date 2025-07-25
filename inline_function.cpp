#include<iostream>
using namespace std;
//inline is used to decrease the compile time
//inline this cannot be used for large functions
	 inline void add(int x,int y)
	 {
	 	cout<<x+y<<endl;
	 }
     inline void display(){
    cout<<"addition"<<endl;
}
int main()
{
	display();
	add(2,3);
}

