#include<iostream>
using namespace std;
class product{
	private:
		int price;
		int stock;
	public:
		string productname;
		string category;
	product(int p,int s,string pro,string c)
	{
		price=p;
		stock=s;
		productname=pro;
		category=c;
	}
	void setprice(int cost)
	{
		price=cost;
	}
	int getprice()
	{
		return price;
	}
		void setstock(int s)
	{
		stock=s;
	}
	int getstock()
	{
		return stock;
	}
	void displaydetails()
	{
		cout<<"price:"<<price<<endl;
		cout<<"stock:"<<stock<<endl;
		cout<<"product name:"<<productname<<endl;
		cout<<"category:"<<category<<endl;
	}
};
int main()
{
	product p1(2500,24,"mobile","high");
	p1.displaydetails();
	p1.setprice(4500);
	cout<<"updated price:"<<p1.getprice()<<endl;
	p1.setstock(25);
	cout<<"updated stock:"<<p1.getstock()<<endl;
}
