//8.Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, 
//and marks. Include member functions to calculate the grade based on the marks and display the student's information.
//Accept address from each student implement using of aggregation
#include<iostream>
using namespace std;
class student{
	private:
		string student_name;
		int roll_num,student_marks,student_class;
	public:
		student(string student_name,int student_class,int roll_num,int student_marks)
		{
			this->student_name =student_name;
			this->student_class=student_class;
			this->roll_num=roll_num;
			this->student_marks=student_marks;
		}
			string stu_name(){
				return student_name;
			}
			int stu_class()
			{
				return student_class;
			}
			int stu_roll_num()
			{
				return roll_num;
			}
			int stu_mark()
			{
				return student_marks;
			}
		
};
class stu_dent{
	private:
		string student_add;
		student *student_ref;
	public:
			
		stu_dent(string student_add,student &obj)
		{
				this->student_add =student_add;
				 this->student_ref = &obj;	
		}
		void display_data()
		{
			cout<<endl<<"\nStudent name = "<<student_ref->stu_name();
			cout<<endl<<"Student class = "<<student_ref->stu_class();
			cout<<endl<<"Student roll number = "<<student_ref->stu_roll_num();
			cout<<endl<<"Student marks = "<<student_ref->stu_mark();;
			
			int marks = student_ref->stu_mark();
			if(marks > 0 && marks <101)
			{
				if(marks >= 85 && marks<101)
				{
					cout<<endl<<"Grade A ";
				}
				else if(marks>=75 && marks<85)
				{
					cout<<endl<<"Grade B ";
				}
				else if(marks>=65 && marks<50)
				{
					cout<<endl<<"Grade C ";
				}
				else{
					cout<<endl<<"Grade D ";
				}
			}
			else{
				cout<<endl<<"Invalid marks";
			}
		
			cout<<"\nstudent address = "<<student_add;
		}
		
};
using namespace std;
int main(){
	string student_name,student_add;
	int student_marks,roll_num,stu_class;
	
	cout<<"Enter your roll number :";
	cin>>roll_num;
	cout<<"Enter your class :";
	cin>>stu_class;
	cout<<"Enter your name:";
	cin>>student_name;
	cout<<"Enter your marks  :";
	cin>>student_marks;
	cout<<"Enter your address:";
	cin>>student_add;
	
	student s1(student_name,stu_class,roll_num,student_marks);
	stu_dent s2(student_add,s1);
	s2.display_data();
	
	// here we can use the same add for more than one student 
	// for example
	student s3("alisha",12,3,95);
	student s4("khani",11,7,35);
	stu_dent st1(student_add,s3);
	stu_dent st2(student_add,s4);
	st1.display_data();st2.display_data();
	return 0;
}
