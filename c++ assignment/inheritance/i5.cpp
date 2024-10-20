//5. Assume that the test results of a batch of students are stored in three different 
// classes. Class Students are storing the roll number.
// Class Test stores the marks obtained in two subjects and class result contains 
// the total marks obtained in the test.
//  The class result can inherit the details of the marks obtained in the test 
//  and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class student{
	//roll_number
	protected:
		int roll_num;
	public:
		void set_student_data(int roll_num)
		{
			this->roll_num = roll_num;
		}
		void display_student_data()
		{
			cout<<"\nStudent roll number = "<<roll_num;
		}
};
class test :public student{
	//marks
	protected:
		int marks1,marks2,marks3;
	public:
		void set_mark_data(int marks1,int marks2,int marks3){
			this->marks1=marks1;
			this->marks2=marks2;
			this->marks3=marks3;
		}
		void display_mark_data()
		{
			cout<<"\nMarks of three subject = "<<marks1<<" "<<marks2<<" "<<marks3;
		}
};
class result:public test{
	//result
	private:
		float total;
	public:
		void set_result_data(){
			total =  marks1 + marks2 + marks3;
		}
		void result_data(int roll_num,int marks1,int marks2,int marks3){
			set_student_data(roll_num);
			set_mark_data(marks1,marks2,marks3);
			
			display_student_data();
			display_mark_data();
			set_result_data();
			
			cout<<"\nTotal marks = "<<total;
		}
};
int main(){
	result r1;
	int roll_num,mark1,mark2,mark3;
	cout<<"Enter student roll number = ";
	cin>>roll_num;
	cout<<"Enter marks of three subjects = ";
	cin>>mark1>>mark2>>mark3;
	return 0;
}
