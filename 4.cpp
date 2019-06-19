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

class Purchase
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

void Carpet(Purchase *P, double x)
{
	P->setPricepersqft(x);
}

void Carpet(Purchase *P, double l, double b)
{
	P->setDimenstions(l, b);
}

double Carpet(Purchase P)
{
	return(P.getTotalprice());
}

int main()
{
	Purchase P;
	double x;
	cout<<"Enter the price per sqft of carpet: ";
	cin>>x;
	Carpet(&P, x);
	
	double l, b;
	cout<<"Enter length and width:\n";
	cin>>l>>b;	
	Carpet(&P, l, b);
	
	double totalprice = Carpet(P);
	cout<<"Total price of the carpet is = "<<totalprice;
}

