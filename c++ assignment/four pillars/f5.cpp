//5.	Write a C++ program to create a class called Triangle that has private member
// variables for the lengths of its three sides.Implement member functions to determine if the
//  triangle is equilateral,isosceles, or scalene.
//  Equilateral if all sides are equal.
// Isosceles if exactly two sides are equal.
//Scalene if all three sides are different.
#include<iostream>
using namespace std;
class triangle{
	private:
		int side1,side2,side3;
	public:
		void set_data(int side1,int side2,int side3){
			this->side1=side1;
			this->side2=side2;
			this->side3=side3;
		}
		void get_data(){
			if(side1 == side2 && side2 == side3 ){
				cout<<"\nIt is Equilateral triangle";				
			}
			else if(side1 != side2 && side2!=side3 && side1!=side3)
			{
				cout<<"\nIt is Scalene triangle";
			}
			else if(side1==side2 || side2==side3 ||side1==side3){
				cout<<"\nIt is Isosceles Isosceles";
			}
			else{
				cout<<"It is invalid";
			}
		}
};
int main(){
	int side1,side2,side3;
	cout<<"Enter the three sides of triangle = ";
	cin>>side1>>side2>>side3;
	
	triangle tr1;
	tr1.set_data(side1,side2,side3);
	tr1.get_data();
	return 0;
}
