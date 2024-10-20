//13.	Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class number{
	private:
		int num1,num2;
	public:
		void get_data(int num1,int num2)
		{
			this->num1=num1;
			this->num2=num2;
			cout<<"\nnum1 = "<<num1<<" num2 = "<<num2;
		}
		friend void max_num(number &obj);
};
void max_num(number &obj)
{
	if(obj.num1 > obj.num2)
	{
		cout<<"\nnum1 is the greatest = "<<obj.num1;
	}
	else{
		cout<<"\nnum2 is the greatest = "<<obj.num2;
	}
}
int main(){
	int a , b;
	cout<<"Enter a and b values = "; 
	cin>>a>>b;
	number n1;
	n1.get_data(a,b);
	max_num(n1);
	return 0;
}
