//10.	Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;
class string_loading{
	private:
	string string_name;
	public:
		
		void get_data(){
			cout<<"\nEnter a string :";
			getline(cin,string_name);
		}	
		void display_data()
		{
			cout<<" \t string = "<<string_name;
		}
		string_loading operator+(string_loading obj){
			string_loading result;
			result.string_name = string_name + obj.string_name;
			return result;
		}
};
int main()
{
	string_loading s1,s2,s3;
	s1.get_data();
	s2.get_data();
	
	s3=s1+s2;
	s3.display_data();
	return 0;
}
