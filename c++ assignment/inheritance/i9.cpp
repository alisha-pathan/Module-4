//9.	Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class operator_overloading{
	private:
		int size,a[100];
	public:
		void get_data()
		{
			int i; 
			cout<<"\nEnter a size = ";
			cin>>size;
			for(i=0; i<size; i++)
			{
				cout<<"\nEnter array elements = ";
				cin>>a[i];
			}
		}
		void put_data(){
			int i;
			cout << "\nArray elements = ";
			for(i=0;i<size;i++)
			{
				cout<<"\t "<<a[i];
			}
		}
		operator_overloading operator*(operator_overloading &obj)
		{
			int i;
			operator_overloading result;
			result.size = size;
			for(i=0; i< size ; i++)
			{
				result.a[i] =a[i] + obj.a[i];
			}
			return result;
		}
};
int main(){
	operator_overloading o1,o2,o3;
	o1.get_data();
	cout<<endl;
	o2.get_data();
	
	o3 = o1 * o2;
	o3.put_data();
	return 0;
}
