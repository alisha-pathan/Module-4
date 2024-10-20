//1.	Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
//Data member of batsman. Total runs, Average runs and best performance. 
//Member functions input data, calculate average runs, Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer
{
	int player;
	public:
		void set_data(){
				cout<<"\nEnter number of player : ";
				cin>>player;
		}
		int get_data()
		{
			return player;
		}
};
class batsman : public cricketer{
	
	private:
		 int total_runs,best_performance;
		 float average_runs;
	public:
		void set_data_(int total_runs,int best_performance){
			this->total_runs =total_runs;
			 this->average_runs = total_runs / get_data();
			this->best_performance =best_performance;
		}
		void average_data()
		{
			cout<<"\nAverage runs = "<<average_runs<<endl;
		}
		void display_set_data()
		{
			cout<<"Total runs = "<<total_runs<<endl;
			cout<<"best performance = "<<best_performance;
		}
		void display_data()
		{
			cout<<"\ncricketers data :\n";
			average_data();
			display_set_data(); 	
		}
};
int main()
{
	batsman b1;
	int total_runs,best_performance;
	cout<<"\nEnter total runs : ";
	cin>>total_runs;
	cout<<"\nEnter best performance : ";
	cin>>best_performance;
	
	b1.set_data();
	b1.set_data_(total_runs,best_performance);
	
	b1.display_set_data();
	b1.average_data();
	b1.display_data();

	return 0;
}
