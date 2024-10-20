/*4.	Write a C++ program to implement a class called Circle that has private
 member variables for radius. Include member functions to calculate the circle's
 // area and circumference.*/
#include<iostream>
#define pi 3.14
using namespace std;
class circle{
	private:
		float radius;
	
	public:
		void set_data(float r){
				radius = r;
		}
		void get_data(){
			cout<<"circles area  = "<<pi*radius*radius<<endl;
			cout<<"circles circumetances = "<<2*pi*radius;
		}
};
int main(){
	float r;
	cout<<"Enter number : ";
	cin>>r;
	circle r1;
	r1.set_data(r);
	r1.get_data();
	return 0;
}
