#include<iostream>
using namespace std;
int main(){
	int num,even_num = 0,odd_num=0;
	cout<<"enter any num 0 to stop"<<endl;
	
	while(true){
		cin>>num;
		if(num == 0){
			break;
		} if(num % 2== 0){
			cout<<"even num"<<endl;
			even_num++;
		}if(num % 2 != 0){
			cout<<"odd num"<<endl;
			odd_num++;
		}
	} cout<<"total even num"<<even_num<<endl;
	cout<<"total odd num"<<odd_num<<endl;
	
	
	
	

	return 0;
}
