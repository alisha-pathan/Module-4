//1.	Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename a>
void swaping(a &num1,a &num2)
{
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout<<"\n After swaping num1 = "<<num1<<" num2 ="<<num2;
}
int main()
{
	int num1,num2;
	cout<<"Enter num1 and num2 values = "; 
	cin>>num1>>num2;
	cout<<"\n Before swaping num1 = "<<num1<<" num2 ="<<num2;
		swaping(num1,num2);
	return 0;
}
