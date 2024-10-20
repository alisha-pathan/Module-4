/*3.	Write a C++ program to create a class called Car that has private member variables
 for company, model, and year. 
Implement member functions to get and set these variables.*/
#include<iostream>
using namespace std;
class car{
	private:
		string company,model;
		int year;
		
		public:
		void set_data(string company,string model,int year){
			this->company =company;
			this->model=model;
			this->year=year;
		}
		void get_data()
		{
			cout<<"\nName of the company "<<company;
			cout<<"\nName of the model = "<<model;
			cout<<"\nYear = "<<year;
		}
};
int main(){
	string company,model; 
	int year;
	cout<<"Enter the name of the company:";
	getline(cin,company);
	cout<<"\nEnter the name of the model : ";
	getline(cin,model);
	cout<<"\nEnter the year : ";
	cin>>year;
	
	car c1;
	c1.set_data(company,model,year);
	c1.get_data();
	return 0;
}
