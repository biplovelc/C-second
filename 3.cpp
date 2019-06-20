#include<iostream>
using namespace std;

class Circle
{
	private:
		double radius;
	public:
		void setRadius(double r)
		{
			radius = r;
		}
		double getArea()
		{
			double area = 3.1415*radius*radius;
			return area;
		}
};
class Pizza
{
	private: 
		double price;
		Circle size;
	public:
		void setPrice(double p)
		{
			price = p;	
		}	
		void setSize(double r)
		{
			size.setRadius(r);
		}
		double costPerSqIn()
		{
			return price/size.getArea();
		}
};

int main()
{
	Pizza myPizza;
	myPizza.setPrice(890.67);
	myPizza.setSize(7.5);
	double cost = myPizza.costPerSqIn();
	cout<<"Cost per square inch of Pizza = "<<cost<<endl;
}

