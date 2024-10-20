//4.	Write a C++ Program display Student Mark sheet using Multiple inheritance*/
#include<iostream>
using namespace std;
class student{
	protected:
		string name;
		int roll_num; 
		void set_student_data(string name,int roll_num){
			this->name=name;
			this->roll_num=roll_num;
		}
		void display_student_data(){
			cout<<"\nStudents name : "<<name;
			cout<<"\nstudents roll number = "<<roll_num;
		}
};
class marks{
	protected:
		float marks1,marks2,marks3;
	public:
		void set_mark_data(float marks1,float marks2,float marks3){
			this->marks1 = marks1;
			this->marks2= marks2;
			this->marks3=marks3;
		}
		void display_marks_data(){
			cout<<"\nStudents marks1 = "<<marks1;
			cout<<"\nStudents marks2 = "<<marks2;
			cout<<"\nStudents marks3 = "<<marks3;
		}
};
class mark_sheet :public student,public marks{
		private:
		        float total,percentage;
		public:
			void calc_marks(){
				total = marks1+marks2+marks3;
				percentage =total / 3.0;
			}
			void set_mark_sheet(string name,int roll_num,float marks1,float marks2,float marks3){
				set_student_data(name,roll_num);
				set_mark_data(marks1, marks2, marks3);
			}
			void display_mark_sheet(){
				display_student_data();
				display_marks_data();
				calc_marks();
				
				cout<<"\n Total marks = "<<total;
				cout<<"\nPercentage = "<<percentage<<"%";
			}
};
int main(){
	mark_sheet m1;
	int roll_num;string name;
	float mark1,mark2,mark3;
	cout<<"Enter students name = ";
	getline(cin,name);
	cout<<"Enter students roll number = ";
	cin>>roll_num;
	cout<<"Enter marks of three subjects = ";
	cin>>mark1>>mark2>>mark3;
	
	m1.set_mark_sheet(name,roll_num,mark1,mark2,mark3);
	m1.display_mark_sheet();
	return 0;
}
