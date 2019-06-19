#include<iostream>
using namespace std;

class Circle
{
	private:
		int radius;
	public:
		void setRadius(int r)
		{
			radius = r;
		}
		double getArea()
		{
			double area = 3.1415*radius*radius;
			return area;
		}
};
class myPizza
{
	private: 
		double price;
		Circle size;
	public:
		void setPrice(double p)
		{
			price = p;	
		}	
		void setSize(int r)
		{
			size.setRadius(r);
		}
		double costPerSqIn()
		{
			return price/size.getArea();
		}
};

void Pizza(myPizza *P, double p)
{
	P->setPrice(p);
}

void Pizza(myPizza *P, int s)
{
	P->setSize(s);
}

double Pizza(myPizza P)
{
	P.costPerSqIn();
}

int main()
{
	myPizza P;
	Pizza(&P, 1000.9089);
	Pizza(&P, 9);
	double money = Pizza(P);
	cout<<"Cost of 1 sqinch of pizza = "<<money;
}

