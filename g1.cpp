//#include<iostream>
//using namespace std;
//int main(){
////	int num;
////	cout<<"input num"<<endl;
////	cin>>num;
////
////  int sum=0;
////  for(int i=1; i<=num; i=i+2){
////	sum = sum + i;	
//////  if(i==5){
//////  break;
//////	}		
////	}
////cout<<"sum of  "<<num << "\t=\t"<<sum<<endl;	
////int n = 10,oddSum=0;
////for(int i = 1;i<=n;i++){
////	if(i%2!=0){
////		oddSum =oddSum + i;
////	}
////		
////}
////cout<<""<<oddSum;
////int n=5;
////int evenSum =0;
////for(int i = 1;i<=n;i++){
////	if(i % 2 == 0){
////		evenSum = evenSum+i;
////	}
////	
////}
////      cout<<""<<evenSum;
////int n = 10 ;
////cout<<"give a num"<<endl;
////cin>>n;
////for(int i =1;i<=n;i = i+2){
////	if(n == 1 && n == 3 && n == 5 && n == 7 && n == 9){
////		cout<<""<<i<<endl;
////	}
////}
////float a,b,c;
////a=2, b=1;
////cout<<"num"<<endl;
////cin>>c;
//
//int n= 5;
//int i;
//while(int i=1; i<=n; i--){
//	while(j =5; j<=i; j++){
//		cout<<""<<j<<endl;
//	}
//}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int n,i=1;
//	cin >> n;
//	char steric = '*',equal = '=';
//	for(int i=1; i<=10; i++){
//	
//	cout<<""<<n<<steric<<i<<equal<< n*i<<endl;	
//	//cout<<""<<i<<endl;	
//}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    for (int number = 1; number <= 9; number += 2) {
//        cout << number << "\t\t" << (number + 1) * (number + 1) / 4 << endl;
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int outer = 5; // Start from 5
//
//    while (outer > 0) { // Outer loop controls the rows
//        int inner = outer; // Inner loop starts with the value of the outer loop
//        while (inner > 0) { // Inner loop controls the columns
//            cout << outer; // Print the current outer value
//            inner--; // Decrease the inner loop counter
//        }
//        cout << endl; // Move to the next line after each row
//        outer--; // Decrease the outer loop counter
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int num;

    // Input the number for the table and its range
    cout << "Enter the number for the table: ";
    cin >> num;
    //cout << "Enter the range for the table: ";
    //cin >> range;

    // Loop to generate the table in reverse order
    for (int i = 5; i >= 1; i--) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}






