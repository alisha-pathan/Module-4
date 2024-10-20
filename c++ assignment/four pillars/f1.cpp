//1.	Write a program to find the multiplication values and the cubic values
//	 using inline function
#include<iostream>
using namespace std;
class multi_value{
	long long int num1,num2;
	public:
		void set_data(long long int num1,long long int num2){
			this->num1 = num1;
			this->num2 = num2; 
		}
		void get_data(){
			cout<<"\nMultiplication of "<<num1<<"and"<< num2<<" = "<<num1*num2;
			cout<<"\ncubic form of "<<num1<<" is ="<<num1*num1*num1;
			cout<<"\ncubic form of "<<num2<<" is = "<<num2*num2*num2;
		}
};
int main()
{
	long long int num1,num2;
	cout<<"Enter num1 and num2 = ";
	cin>>num1>>num2;
	
	multi_value m1;
	m1.set_data(num1,num2);
	m1.get_data();
	
	return 0;
}
