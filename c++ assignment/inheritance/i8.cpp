//8.Write a program to Mathematic operation like Addition, Subtraction, Multiplication, 
//Division Of two number using different parameters and Function Overloading
#include<iostream>
using namespace std;
class calculator{
		public:
			void calc(int num1,int num2)
			{
				cout<<"\naddition = "<<num1+num2;
			}
			void calc(long int num1,int num2)
			{
				cout<<"\nsubstraction="<<num1-num2;
			}
			void calc(float num1,float num2)
			{
				cout<<"\ndivision = "<<num1/num2;
			}
			void calc(long int num1,long int num2)
			{
				cout<<"\nmultiplication = "<<num1*num2;
			}
};
int main(){
	calculator c1;
	c1.calc(2.3f,1.2f);
	calculator c2;
	c2.calc(853l,5);
	calculator c3;
	c3.calc(80,50);
	calculator c4;
	c4.calc(750l,850l);
	
	return 0;
}
