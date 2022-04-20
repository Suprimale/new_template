/*Assume that a bank maintain two kinds of accounts for customers,one called as savings account and the other as current account. 
THe savings accounts provides compound interest at the annual rate of 10%.Current account holders get simple interest of 5%
per year create a class account that stores customer name and account number.From this derive the classes current_account
and saving_account. Include necessary member funtions and calculate the total ampount in an account for both type of customers.*/

#include<iostream>
using namespace std;
class account{
	int accountnum;
	char customername;
	public:
		void detail(){
			cout<<"Enter account number";
			cin>>accountnum;
			cout<<"Enter customer name";
			cin>>customername;
		}
}; 
class saving_account:public account{
	float compund;
	saving_account(){
		compound=10;
	}
	void compound_interest(){
		
	}
};
class current_account:public account{
	int principle,time;
	float sirate;
	public:
		current_account(){
		   sirate=5;
		}
};
int main(){
	current_account c;
	saving_account s;
	int p,t,r;
	cout<<"Enter principle for current account";
	cin>>p;
	cout<<"Enter time for current account";
	cin>>t;
	cout<<"Enter rate for current account";
	cin>>r;
	cout<<"Enter principle for saving account";
	cin>>p;
	cout<<"Enter time for saving account";
	cin>>t;
	cout<<"Enter rate for saving account";
	cin>>r;
	
}

