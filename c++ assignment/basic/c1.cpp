#include<iostream>
//1 WAP to create simple calculator using class 
using namespace std;
class calculator{
	public :
		double sum(double a,double b)
		{
			return a + b;
		}
		double sub(double a, double b)
		{
			return a/b;
		}
		double mul(double a, double b)
		{
			return a * b;
		}
		double div(double a, double b)
		{
			return a/b;
		}

}; 
int main()
{
	calculator calc;
	double num1,num2,ans=0;
	char sym;
	cout<<"\n Enter first number :";
	cin>>num1;
	 cout<<"\n Enter second number :";
	cin>>num2;
	
	cout<<"\n  '+' for sum : \n  '-' for sub 1; \n  '*' for multiplication : \n '/' for division \n\n Enter : ";
	cin>>sym;
	
	switch(sym)
	{
		
		case '+' :
			ans = calc.sum(num1,num2);
			cout<<" sum of two num = "<<ans;
			break;
		
		case '-' :
			 ans = calc.sub(num1,num2);
			cout<<" sub of two num = "<<ans;
			break;
			
		case '/' :
			ans = calc.div(num1,num2);
			cout<<" div of two num = "<<ans;
			break;
			
		case '*' :
			ans = calc.mul(num1,num2);
			cout<<" mul of two num = "<<ans;
			break;
			
			}
}
