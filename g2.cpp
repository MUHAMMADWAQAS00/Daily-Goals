#include<iostream>
using namespace std;
int main(){
int n =11;
bool isPrime= true;
for(int i=2;i<=n-1;i++)

{
	if(n%i==0){
		cout<<"False";
		break;
	}
}
	
	
	return 0;
}

