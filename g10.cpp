////#include<iostream>
////using namespace std;
////int main(){
////	int choice, amount, balance = 1000;
////	
////	do{
////		cout<<"***WELCOME TO ATM***\n\n";
////		cout<<"1. Check Balance\n";
////		cout<<"2. Withdraw Money\n";
////		cout<<"3. Withdraw Money\n";
////		cout<<"4. Exit\n";
////		
////		cout<<"Enter your choice :";
////		cin>> choice;
////		
////		switch (choice){
////			case 1:
////		}
////		
////		
////		
////	} while (choice != 4);
////	
////	
////	
////	return 0;
////}
//
//
//#include<iostream>
//using namespace std;
//int main(){
//	double amount, rate = 5.0;
//	int years;
//	
//	cout<<"Enter your amount in Rs. ";
//	cin >> amount;
//	cout<<"Enter the number of years: ";
//	cin>> years;
//	
//	int i=1;
//	while(i<=years){
//		double interest = (amount * rate) / 100;
//		amount += rate;
//		cout<<"Year "<<i<<": Total amount = Rs. "<< amount <<endl;
//		i++;		
//	}
//
//	return 0;
//}

#include<iostream>
using namespace std;
int main(){
	int balance, amount;
	cout<<"Enter your balance :";
	cin>> balance;
	
	do{
		cout<<"Enter the amount you would like to withdraw (0 to exit): ";
		cin>> amount;
		
		if (amount == 0){
			cout<<"Transaction Cancelled.\n";
			break;
		} if (amount > balance || amount % 500 != 0){
			cout<<"Invalid amount. Try again!";
			continue;
		} 
		balance -= amount;
		cout<<"Transaction successful! Remaining balance :"<<balance<<endl;
		
	} while(amount != 0);	
	return 0;
}
