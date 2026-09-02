#include<iostream>
using namespace std;
int toll(int a){
	float amount=1000;
	switch(a){
		case 1:{
			cout<<"\n"<<"FASTag Current Balance:";
			cout<<amount;
			break;
		}
		case 2:{
			float b;
			cout<<"\n"<<"Enter amount to be recharged";
			cin>>b;
			amount+=b;
			cout<<amount;
			for(int i=0;i<1;i++){
				int a;
	cout<<"\n"<<"**********FASTag**********";
	cout<<"\n"<<"Enter";
		cout<<"\n"<<"1. Check FASTag Balance";
			cout<<"\n"<<"2. Recharge FASTag ";
				cout<<"\n"<<"3. Pay Toll";
				cout<<"\n"<<"4. EXIT";
					cin>>a;
					switch(a){
		case 1:{
			cout<<"\n"<<"FASTag Current Balance:";
			cout<<amount;
			break;
		}
		case 2:{
			float b;
			cout<<"\n"<<"Enter amount to be recharged";
			cin>>b;
			amount+=b;
			cout<<amount;
			
			break;
		}
		case 3:{
			int v;
			cout<<"\n"<<"Enter the type of vehicle?";
			cout<<"\n"<<"1. Car";
			cout<<"\n"<<"2. Bus";
			cout<<"\n"<<"3. Truck";
			cin>>v;
			if(v==1){
				int car_toll=100;
				amount-=car_toll;
				cout<<"\n"<<"Car toll deducted:";
				cout<<"\n"<<"Total balance";
				cout<<"\n"<<amount;
			}
			else if(v==2){
					int bus_toll=200;
				   amount-=bus_toll;
				cout<<"\n"<<"Car toll deducted:";
				cout<<"\n"<<"Total balance";
				cout<<"\n"<<amount;
			}
			else if(v==3){
					int truck_toll=200;
				amount-=truck_toll;
				cout<<"\n"<<"Car toll deducted:";
				cout<<"\n"<<"Total balance";
				cout<<"\n"<<amount;
			}
			else{
				cout<<"please enter 1 or 2 or 3";
			}
			break;
		}
		case 4:{
			cout<<"Thankyou for visiting!";
			break;
		}
	}    
			}
			break;
		}
		case 3:{
			int v;
			cout<<"\n"<<"Enter the type of vehicle?";
			cout<<"\n"<<"1. Car";
			cout<<"\n"<<"2. Bus";
			cout<<"\n"<<"3. Truck";
			cin>>v;
			if(v==1){
				int car_toll=100;
				amount-=car_toll;
				cout<<"\n"<<"Car toll deducted:";
				cout<<"\n"<<"Total balance";
				cout<<"\n"<<amount;
			}
			else if(v==2){
					int bus_toll=200;
				   amount-=bus_toll;
				cout<<"\n"<<"Car toll deducted:";
				cout<<"\n"<<"Total balance";
				cout<<"\n"<<amount;
			}
			else if(v==3){
					int truck_toll=200;
				amount-=truck_toll;
				cout<<"\n"<<"Car toll deducted:";
				cout<<"\n"<<"Total balance";
				cout<<"\n"<<amount;
			}
			else{
				cout<<"please enter 1 or 2 or 3";
			}
			break;
		}
		case 4:{

			cout<<"Thankyou for visiting!";
			break;
		}
		default:
			{
				cout<<"Please enter 1,2,3,4";
			}
	}
	
}
int main(){
	int a;
	cout<<"\n"<<"**********FASTag**********";
	cout<<"\n"<<"Enter";
		cout<<"\n"<<"1. Check FASTag Balance";
			cout<<"\n"<<"2. Recharge FASTag ";
				cout<<"\n"<<"3. Pay Toll";
				cout<<"\n"<<"4. EXIT";
					cin>>a;
					toll(a);
}
