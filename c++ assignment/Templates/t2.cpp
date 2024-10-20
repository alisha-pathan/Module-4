//2.	Write a program of to sort the array using templates
#include <iostream>
using namespace std;
template<typename t>
void sorting_arr(t arr[],t size){
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i] > arr[j])
			{
				t temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"\n\nAfter swaping = ";
	for(int i = 0 ; i<size; i++)
	{
		cout<<"\t "<<arr[i];
	}
}
int main()
{
	int arr[100],size,i;
	cout<<"\nEnter size of array : ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the elements = ";
		cin>>arr[i];
	}
	cout<<"\nDisplay the elements before sorting = ";
	for(i=0;i<size;i++)
	{
		cout<<"\t"<<arr[i];
	}
	sorting_arr(arr,size);
	return 0;
}
