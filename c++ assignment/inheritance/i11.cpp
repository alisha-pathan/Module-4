//11.Write a program to calculate the area of circle, rectangle and triangle using 
//Function Overloading
#include<iostream>
#define pi 3.14
using namespace std;
class function_loading{

	public:
		void area(int r){
			cout<<"\ncircle area = "<<pi*r*r;
		}
		void area(double l,double w)
		{
			cout<<"\nTriangle area = "<<0.5*l*w;
		}
		void area(int l,int w)
		{
			cout<<"\nRectangle area = "<<l*w;
		}
};
int main()
{
	function_loading f1;
	double l,w;
	int r,i,s;
	cout<<"Enter length and width for double = ";
	cin>>l>>w;
	cout<<"Enter radius = ";
	cin>>r;
	cout<<"Enter length and width for int = ";
	cin>>i>>s;	
	f1.area(l,w);
	f1.area(i,s);
	f1.area(r);

	return 0;
}
