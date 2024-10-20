//6.	Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based 
//on employee performance. Using of constructor
//
//here,performance
//          A = 0.20
//   	    b = 0.10
//   	    c = 0.05
//   	    d = 0
#include<iostream>
using namespace std;
class employee{
	private:
		string emp_name;
		char emp_per;
		int emp_id;
		long int emp_salary;
	public:
		void set_data(string emp_name,int emp_id,long int emp_salary)
		{
			this->emp_name=emp_name;
			this->emp_id = emp_id;
			this->emp_salary = emp_salary;
		}
		void cal_data(char emp_per){
			this->emp_per=emp_per;
			if(emp_per == 'a' || emp_per == 'A'){
				emp_salary += emp_salary * 0.20;
			}
			else if(emp_per == 'b' || emp_per == 'B'){
				emp_salary += emp_salary * 0.10;
			}
			else if(emp_per == 'c' || emp_per == 'C'){
				emp_salary += emp_salary * 0.05;
			}
			else if(emp_per == 'd' || emp_per == 'D'){
				emp_salary += 0;
			}
			else{
				cout<<"\nInvalid";
			}
			cout<<"Your performance = "<<emp_per<<endl;
		}
		void display_data()
		{
			 cout << "Employee Name: " << emp_name << endl;
        	 cout<<"Employee ID: "<<emp_id<< endl;
             cout<<"Employee Salary: "<<emp_salary<< endl;
		}
};
int main(){
	string emp_name;
	char emp_per;
	int emp_id;
	long int emp_salary;
	
	cout<<endl<<"Enter name : ";
	cin>>emp_name;
    cout<<"Enter Employee ID: ";
    cin>>emp_id;
    cout<<"Enter Employee Salary: ";
    cin>>emp_salary;
    cout<<"Your performance : ";
    cin>>emp_per;
    
    employee e1;
    e1.set_data(emp_name,emp_id,emp_salary);
    e1.cal_data(emp_per);
    e1.display_data();
	return 0;
}
