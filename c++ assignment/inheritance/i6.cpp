//6. Write a C++ Program to show access to Private Public and Protected using Inheritance]
#include<iostream>
using namespace std;
class base_class{
	private:
//		 Accessible only within the class
		int x = 10;
	protected:
//		 Accessible in base and derived class.
			void display_protected()
			{
				cout<<"\n It is protected from parent access specifier";
			}
	public:
		void display_private()
			{
				//in order to access the value of private class 
				this->x=x;
				cout<<"\n from parent access specifier private x = "<<x;
			}
		void display_public()
			{
				//  Accessible everywhere. in classes and out of the classes
				cout<<"\n It is from public access specifier";
			}
};
class derived_class:public base_class{
	public:
		void display_derived()
		{
			display_public();
			display_protected();
			display_private();
		}
};
int main(){
	derived_class d1;
	d1.display_derived();
	cout<<endl;
	
	base_class b1;
	b1.display_private();
	b1.display_public();
	return 0;
}

