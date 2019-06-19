#include<iostream>
using namespace std;

void calculate(int n, int r, int c, int m)
{
	long total;
	total = n*r+c+m;
	cout<<"Your total amount is = Rs."<<total<<endl;
}
void calculate(int c, int m)
{
	long total;
	total = c+m;
	cout<<"Your total amount is = Rs. "<<total<<endl;
}
int main()
{
	char ch;
	int num, rate, charges, med;
	cout<<"Enter if the patient was admitted as in-patient(y)or out(n): ";
	cin>>ch;
	cout<<endl;
	if (ch=='y')
	{
		cout<<"Enter the number of days in hospital: ";
		cin>>num;
		cout<<"Enter daily rate: ";
		cin>>rate;
		cout<<"Enter charges for hospital serrvices: ";
		cin>>charges;
		cout<<"Enter hospital medicatin charges: ";
		cin>>med;
		calculate(num, rate, charges, med);
	}
	else
	{
		cout<<"Enter charges for hospital serrvices: ";
		cin>>charges;
		cout<<"Enter hospital medicatin charges: ";
		cin>>med;
		calculate(charges, med);
	}
	
}
