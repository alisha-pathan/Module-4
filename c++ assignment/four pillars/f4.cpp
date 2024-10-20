/*4.	Write a C++ program to implement a class called Bank Account that 
has private member variables for account number and balance. 
Include member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;
class bank_account{

			string name,acc_type;
			long long int acc_num,acc_bal;
			
			public:
				void depositer_name(string name){
					this->name=name;
				}
				void account_type(string acc_type){
					this->acc_type=acc_type;
				}
				void account_number(long long acc_num){
					this->acc_num=acc_num;
				}
				void account_balance(long long acc_bal)
				{
					this->acc_bal=acc_bal;
				}
				
				void display(){
					cout<<"Depositers name : "<<name<<endl;
					cout<<"Account type : "<<acc_type<<endl;
					cout<<"Account number : "<<acc_num<<endl;	
				}	
//		display acc balance 
				void display_balance(){
					cout<<"Account balance : "<<acc_bal<<endl;
				}
				
//	 to	deposite money
			void deposite_money(long long int depo_money){
				acc_bal += depo_money;
			}
			void display_after_deposite(){
				cout<<"After deposite the money your balance : "<<acc_bal<<endl;
			}
// now withdraw money
			void get_withdraw_money(long long int withdraw_money){
				// check money is available or not
				if(withdraw_money <= acc_bal)
				{
					acc_bal -= withdraw_money;
					cout<<"Your total balance = "<<acc_bal<<endl;
				}
				else{
					cout<<"You dont have enough money for withdraw"<<endl;
					cout<<" Your total balance = "<<acc_bal<<endl;
				}
				
			}
};
int main(){
	  string name , acc_type;
	  long long int acc_num,acc_bal,amount,choice;
	  
	  cout<<"Enter your name : ";
	  getline(cin,name);
	  cout<<endl<<"Enter your acc number :";
	  cin>>acc_num;
	  cout<<"\nEnter your acc type (current acc or saving acc) :";
	  cin>>acc_type;
	  cout<<"\nEnter your acc balance : ";
	  cin>>acc_bal;
	  
	  bank_account b1;
	  b1.depositer_name(name);
	  b1.account_type(acc_type);
	  b1.account_balance(acc_bal);
	  b1.account_number(acc_num);
	  
	  b1.display();
	  
	  cout<<"\n Choose 1 for deposite -1 for withdraw : ";
	  cin>>choice;
	  
	  cout<<"\nEnter the amount you want to deposite or withdraw : ";
	  cin>>amount;
	  if(choice == 1){
	            b1.deposite_money(amount);
	            b1.display_after_deposite();
	  }
	   else if(choice == -1){
	   			b1.get_withdraw_money(amount);
	   }
		else{
			cout<<"\nInvalid choice ";
		}
	
	return 0;
}
