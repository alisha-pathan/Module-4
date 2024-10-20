/*5.	Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to calculate 
the rectangle's area and perimeter.

        formula of area = lenght * width;
		formula of perimeter = 2 * (lenght + width)*/
#include<iostream>
using namespace std;
class rectangle{
			private:
				double length,width;
			public:
				void set_data(double length,double width){
					this->length = length;
					this->width = width;
				}
				void get_data()
				{
					cout<<"area of rectangle = "<<length*width;
					cout<<endl<<"perimeter of rectangle = "<<2*(length + width);
				}		
};
int main(){
	double legnth , width;
	cout<<"Enter the legnth = ";
	cin>>legnth;
	cout<<"Enter the width = ";
	cin>>width;
	
	rectangle r1;
	r1.set_data(legnth,width);
	r1.get_data();
	return 0;
}
