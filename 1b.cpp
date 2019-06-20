#include<iostream>
using namespace std;

double compute(double a, long b, int c=47)
{
	double sum = a+b+c;
	return sum;
}
int main()
{
	cout<<"Sum = "<<compute(345671.783, 364782)<<endl;
	cout<<"Sum = "<<compute(34532.324, 287934, 982);
}
