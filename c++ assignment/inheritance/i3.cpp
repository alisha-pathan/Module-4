//3.	Create a class person having members name and age.
// Derive a class student having member percentage. Derive another 
// class teacher having member salary. 
//Write necessary member function to initialize,read and write data.
// Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class student{
		protected:
			float percentage;
		public:
			void set_student_data(float percentage){
				this->percentage =percentage;
			}
			void display_student_data()
			{
				cout<<"\nStudent percentage = "<<percentage<<"%"<<endl;
			}
		
};
class teacher{
	private:
			long int salary;
	public:
		void set_teacher_data(long int salary)
		{
			this->salary = salary;
		}
		void display_teacher_data(){
			cout<<"Teacher salary = "<<salary<<endl;
		}
};
//multiple 
class person:public student,public teacher{
	private:
		string name;
		int age;
	public:
		void set_person_data(string name,int age){
			this->name=name;
			this->age=age;
		}
		void display_person_data(){
			cout<<"\nPerson name = "<<name;
			cout<<"\nPerson age ="<<age;
			display_student_data();
			display_teacher_data();
		}
		//merge them with class_name::function
		void merge_data(string name,int age,long int salary,float percentage)
		{
			person::set_person_data(name,age);
			set_student_data(percentage);
			set_teacher_data(salary);
		}
		void display_merge_data()
		{
			person::display_person_data();
		}
};
int main(){
	person p1;
	string name;
	int age;
	float percentage;
	long int salary;
	cout<<"\nPerson name = ";
	getline(cin,name);
	cout<<"Person age =";
	cin>>age;
	cout<<"Teachers salary = ";
	cin>>salary;
	cout<<"Students percentage = ";
	cin>>percentage;
	
	p1.set_student_data(percentage);
	p1.set_teacher_data(salary);
	p1.set_person_data(name,age);
	p1.display_person_data();
	
	// instead of set datas differently we can merge them 
	p1.merge_data(name,age,salary,percentage);
	p1.display_merge_data();
	return 0;
}
