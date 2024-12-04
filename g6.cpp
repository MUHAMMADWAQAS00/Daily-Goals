//#include<iostream>
//using namespace std;
//int main(){
//	int choice,total_sum,bill;
//	 bill = 0;
//	do{	
//	
//cout<<"Quetta cafe"<<endl;
//cout<<"menu"<<endl;
//cout<<"1-Tea cafe"<<endl;
//cout<<"2-Burger cafe"<<endl;
//cout<<"3-Sandwitch cafe"<<endl;
//cout<<"4-coffee cafe"<<endl;
//cout<<"5-exit"<<endl;
//cin>>choice;
//switch(choice){
//	case 1:
//		cout<<"tea is for 2$"<<endl;
//		total_sum += 2;
//	break;
//	case 2:
//		cout<<"b is for 5$"<<endl;
//		total_sum += 5;
//	break;
//	case 3:
//		cout<<"s is for 6$"<<endl;
//		total_sum += 6;
//	break;
//	case 4:
//		cout<<"c is for 7$"<<endl;
//		total_sum += 7;
//	break;
////	case 5:
////		cout<<"tea is for 2$"<<bill<<endl;
////		total_sum += bill;
////	break;
//    default:
//    	cout<<"printinig bill"<<endl;
//
//}
//}
//while(choice!=5);
//
//cout<<"your bill is"<<total_sum<<endl;
//
// return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int total_bill,choice,items;
	cout<<"hwllo dear how many itemyou want add"<<endl;
	cin>>items;
	do{
	cout<<"welcome mart"<<endl;
	
cout<<"menu"<<endl;
cout<<"1-Tea cafe"<<endl;
cout<<"2-Burger cafe"<<endl;
cout<<"3-Sandwitch cafe"<<endl;
cout<<"4-coffee cafe"<<endl;
cout<<"5-exit"<<endl;
cin>>choice;
switch(choice){
	case 1:
		cout<<"u slect tea it price is 7$"<<endl;
		
		total_bill += 7;
	break;
	case 2:
		cout<<"u slect tea it price is 10$"<<endl;
		total_bill += 10;
	break;
	case 3:
		cout<<"u slect tea it price is 12$"<<endl;
		total_bill += 12;
	break;
	case 4:
		cout<<"u slect tea it price is 15$"<<endl;
		total_bill += 15;
	break;
	default :
		cout<<"invalid num is selection"<<endl;	
}
}
while(choice != 0);
	cout<<"total_bill"<<total_bill<<endl;
	
	return 0;
}
