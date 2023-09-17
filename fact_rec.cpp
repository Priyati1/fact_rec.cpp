#include<iostream>
using namespace std;
int fact(int n){
	//base case
	if(n==0){
		return 1;
	}
	
	//recursive case
	// int small = fact(n-1);
	// //find ans
	// int big=n*small;

	return n*fact(n-1);//without storing
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;;
	return 0;
}