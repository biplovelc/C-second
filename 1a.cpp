#include<iostream>
using namespace std;

double compute(double a, long b=65536, int c=5)
{
	double sum;
	sum = a+b+c;
	return sum;
}
int main()
{
	cout<<"Sum = "<<compute(345.78909)<<endl;
	cout<<"Sum = "<<compute(34567.783, 364782)<<endl;
	cout<<"Sum = "<<compute(34532.324, 28794, 982);
}
