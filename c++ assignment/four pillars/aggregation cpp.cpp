// employee id = not common 
// employee name 
// employee salary 
// employee addresss =common
#include <iostream>
using namespace std;
class employee{
		private:
			string emp_name;
			int emp_id;
			long int emp_salary;
		public:
			employee(string emp_name,int emp_id,long int emp_salary)
			{
				this->emp_name = emp_name;
				this->emp_id = emp_id;
				this->emp_salary=emp_salary;
			}
			string employee_name(){
				return emp_name;
			}
			
			int employee_id()
			{
				return emp_id;
			}
			int employee_salary()
			{
				 return emp_salary;
			}
};

class employee_data{
	private:
		string emp_add;
		employee *emp_ref;
	public:
		
		employee_data(string emp_add,employee &emp)
		{
			this->emp_add = emp_add;
			this->emp_ref= &emp;
		}
			void display_emp_data(){
		cout<<endl<<"Employee name = "<<emp_ref->employee_name();
		cout<<endl<<"Employee id = "<<emp_ref->employee_id();
		cout<<endl<<"Employee salary = "<<emp_ref->employee_salary(); 
	
		long int total_salary = emp_ref->employee_salary();
		if(total_salary > 0 )
		{
			if(total_salary >= 50000){
				total_salary +=  total_salary * 0.20;
			}
			else if(total_salary<50000){
				total_salary += total_salary * 0.10;
			}
			else{
				cout<<"Invalid";
			}	
		}
		else{
			cout<<"\n Invalid salary ";
		}
		
		cout<<endl<<"After bonus salary = "<<total_salary;
		cout<<endl<<"Employee address = "<<emp_add<<endl;
	}
};
int main()
{
	
	string common_address = " ahmedabad";
	employee e1("alisha",15,85000);
	employee e2("khani",25,95000);
	employee e3("rehman",30,75200);
	
	employee_data et1(common_address,e1);
	employee_data et2(common_address,e2);
	employee_data et3(common_address,e3);
	
	et1.display_emp_data();
	et2.display_emp_data();
	et3.display_emp_data();
	return 0;
}
