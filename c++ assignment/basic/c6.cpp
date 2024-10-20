/*6 .Write a C++ program to create a class called Person that has private member variables
 for name, age and country. 
 Implement member functions to set and get the values of these variables*/
 
#include<iostream>
using namespace std;
class person{
	private:
		string name ,country;
		int age;	
		
	public:
		void set_data(string name,string country,int age)
		{
			this->name = name;
			this->country= country;
			this->age = age;
		}
		void get_data()
		{
			cout<<endl<<"Name = "<<name;
			cout<<endl<<"Country = "<<country;
			cout<<"\nAge = "<<age;
		}
};
int main()
{
	string name , country;
	int age;
	
	cout<<"Your name = ";
	getline(cin,name);
	cout<<"Your country name = ";
	getline(cin,country);
	cout<<"Your age = ";
	cin>>age;
	
	person p1;
	p1.set_data(name,country,age);
	p1.get_data();
	return 0;
}
 
