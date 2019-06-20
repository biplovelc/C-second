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
		void setSize(int r)
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
	myPizza.setSize(8.5);
	double cost = myPizza.costPerSqIn();
	cout<<"Cost per square inch of Pizza = "<<cost<<endl;
}

