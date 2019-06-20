#include<iostream>
using namespace std;

class Rectangle
{
	private:
		double length;
		double width;
	public:
		void setLength(int l)
		{
			length = l;
		}
		
		void setWidth(int w)
		{
			width = w;	
		}	
		
		double getArea()
		{
			double a= length*width;
			return a;
		}
};

class Carpet
{
	private:
		double pricepersqft;
		Rectangle size;
	public:
		void setPricepersqft(double p)
		{
			pricepersqft = p;
		}
		
		void setDimenstions(int l, int b)
		{
			size.setLength(l);
			size.setWidth(b);
		}
		
		double getTotalprice()
		{
			double total = pricepersqft*size.getArea();
			return total;
		}
};

int main()
{
	Carpet purchase;
	double a;
	cout<<"Enter the price per square feet: ";
	cin>>a;
	purchase.setPricepersqft(a);
	
	int x, y;
	cout<<"Enter length and breadth of carpet:\n";
	cin>>x>>y;
	purchase.setDimenstions(x, y);
	double total = purchase.getTotalprice();
	cout<<"Total price of carpet = "<<total;
}
