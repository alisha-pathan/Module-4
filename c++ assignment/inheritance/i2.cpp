//2.	Write a C++ Program to find Area of Rectangle using inheritance*/

#include<iostream>
using namespace std;
class shape{
	protected:
		double length,width;
	public:
		void set_data(double length,double width){
			this->length = length;
			this->width = width;
		}
};
class rectangle : public shape{
	public:
		double area_rec(){
			return width*length;
		}
		void display_area(){
			cout<<"\n Area of rectangle = "<<area_rec()<<endl;
		}
};
int main()
{
	rectangle r1;
	double length,width;
	cout<<"Enter the length : ";
			cin>>length;
			cout<<"\nEnter the width : ";
			cin>>width;
		r1.set_data(length,width);
		r1.area_rec();
		r1.display_area();
	return 0;
}
