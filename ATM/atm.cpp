#include<iostream>
using namespace std;
int account(int a){
	int balance=10000;
	switch(a){
		case 1:{
			
			cout<<"Account balance:"<<balance;
			
			break;
		}
		case 2:{
			
			int debit;
			cout<<"Enter the amount you want to debit";
			cin>>debit;
			int total_amount=balance-debit;
			cout<<"Total amount:"<<total_amount;
			break;
	}
	case 3:
		{
			int credit;
			cout<<"Enter the amount to be creditted";
			cin>>credit;
			int amount=balance+credit;
			cout<<"Total Amount:"<<amount;
			break;
		}
		case 4:
			{
				cout<<"Thankyou for visiting";
			}
}
}
int main(){
	int a;
	cout<<"\n"<<"Enter";
	cout<<"\n"<<"1.Balance";
	cout<<"\n"<<"2.To debit the amount";
	cout<<"\n"<<"3.To credit the amount";
	cout<<"\n"<<"4.Exit";
	cin>>a;
	account(a);
	return 0;
}
