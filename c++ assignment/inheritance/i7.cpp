//7.Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include<iostream>
using namespace std;
class first_constructor{
	public:
	first_constructor(){
		cout<<"\n From first constructor";
	}
};
class second_constructor:public first_constructor{
	public:
		second_constructor(){
		cout<<"\n From second constructor";
	}
};
class third_constructor:public second_constructor{
	public:
		third_constructor()
		{
			cout<<"\n From third constructor";
		}
};
int main(){
	third_constructor t1;
	
	return 0;
}
