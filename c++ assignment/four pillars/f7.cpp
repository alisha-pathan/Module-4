//*7.	Write a C++ program to implement a class called Date that has private member variables
// for day, month, and year. 
// Include member functions to set and get these variables,
// as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class date{
	private:
		int day,year,count=0;
		string month;
		
		public:
			void set_data(int day,int month,int year){
				this->day = day;
				this->year =year;
				
				if(((day>0 && day<30) && (year%4==0)) || 
				((month==2 && year%4 != 0) && (day>=1 && day<=28)))
				{
					this->month = "February";
				  } 
				  
				else if((day>0 && day>=31) && (month==1 || month == 3 || month == 5  || month == 7 || month == 8 || month == 10 || month == 12)) 
				{
					switch(month){
						case 1:
							this->month = "january";
							break;
						case 3:
							this->month = "march";
							break;
						case 5:
							this->month = "may";
							break;
						case 7:
							this->month = "july";
							break;
						case 8:
							this->month = "august";
							break;
						case 10:
							this->month = "october";
							break;
						case 12:
							this->month = "december";
							break;
					}
				}
				else if((day>0 && day<31) && ( month == 4 || month == 6  || month == 9 || month == 11)) 
				{
					switch(month){
						case 4:
							this->month = "april";
							break;
						case 6:
							this->month = "june";
							break;
						case 9:
							this->month = "september";
							break;
						case 11:
							this->month = "november";
							break;
						}
					}
				else{
					count++;
				}
			}
			void display(){
				if(count == 0){
					cout<<"Date = "<<day<<"-"<<month<<"-"<<year<<".";
				cout<<"\nDay = "<<day<<"\nMonth = "<<month<<"\nyear = "<<year;
				}
				else{
					cout<<"\n invalid date format";
				}
				
			}
};
int main(){
	int day,month, year;
	cout<<"Enter a day : ";
	cin>>day;
	cout<<"Enter a month :";
	cin>>month;
	cout<<"Enter a year :";
	cin>>year;
	
	date d1;
	d1.set_data(day,month,year);
	d1.display();
	return 0;
}
