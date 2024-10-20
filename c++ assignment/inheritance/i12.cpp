//12.Write a program to swap the two numbers using friend function without 
//using third variable*
#include<iostream>
using namespace std;
class friend_function{
	private:
		int a, b;
	public:
		void set_data(int a,int b){
			this->a=a;
			this->b=b;
			cout<<"\nBefore swapping = "<< "a = "<<a<<" b = "<<b;
		}
		friend void addition(friend_function &obj);
};
void addition(friend_function &obj)
{
	obj.a = obj.a + obj.b;
	obj.b =  obj.a - obj.b;
	obj.a =  obj.a -  obj.b;
	   cout<<"\nAfter swapping = "<< "a = "<<obj.a<<" b = "<<obj.b;
}
int main()
{
	int a ,b ;
	cout<<"Enter a and b values = "; 
	cin>>a>>b;
	friend_function f1;
	f1.set_data(a,b);
	addition(f1);
	return 0;
}
