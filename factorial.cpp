#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	int res = 1;
	if(n==0)
		return 1;
	return n*fact(n-1);
}

int main(){
	int num;
	cout<<"Enter a Number : ";
	cin>>num;
	if(num<0)
	cout<<"Kindly enter a non-negative integer"<<endl;
	else{
	int res = fact(num);
	cout<<"Factorial of "<<num<<" is "<<res<<endl;
	}return 0;
}
