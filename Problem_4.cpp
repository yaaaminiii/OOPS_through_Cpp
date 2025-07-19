#include<iostream>
using namespace std;
class book{
	private:
		int isbn;
		int copiesavailable;
	public:
		string title;
		string author;
	book(int i,int c,string t,string a)
	{
		isbn=i;
		copiesavailable=c;
		title=t;
		author=a;
	}
	void issuebook()
	{
		if(copiesavailable>=1)
		{
			copiesavailable=copiesavailable-1;
			cout<<copiesavailable<<endl;
		}
		else
		{
			cout<<"copies not available"<<endl;
		}
	}
	void addcopies(int n)
	{
		if(n>0)
		{
			copiesavailable =copiesavailable+n;
			cout<<copiesavailable<<endl;
		}
		else
		{
			cout<<"n is not valid to add"<<endl;
		}
	}
};
int main()
{
	book b(1,1,"atomic habits","albert einstein");
	b.issuebook();
	b.addcopies(2);
	b.issuebook();
}
