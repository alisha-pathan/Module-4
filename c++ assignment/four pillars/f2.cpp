/*
2.	Write a program of Addition, Subtraction, Division, Multiplication using constructor.*/
#include<iostream>
using namespace std;
class calc{
	
	double num1,num2;
	
	public:
		calc(double num1,double num2)
		{
			this->num1 = num1;
			this->num2 =num2;
		}
		void add(){
			cout<<"\nAddition of two values = "<< num1+num2;
		}
		void sub(){
				cout<<"\nsubstraction of two values = "<<num1-num2;
		}
		void mul(){
				cout<<"\nmultiplication of two values = "<<num1*num2;
		}
		void div(){
			cout<<"\ndivision of two values = "<<num1/num2;	
		}	
};
using namespace std;
int main(){
	double num1,num2;
	cout<<"Enter first number = ";
	cin>>num1;
	cout<<"Enter a second number = ";
	cin>>num2;
	
	 calc c1(num1,num2);
	 c1.add(); c1.sub();
	 c1.div(); c1.mul();
	
	return 0;
}
