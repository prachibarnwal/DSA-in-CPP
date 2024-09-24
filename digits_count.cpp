#include<bits/stdc++.h>
using namespace std;
int countDigits(long long int n){
	int r = 0;
	while(n>0){
		n = n/10;
		r++;
	}
	return r;
}
int main(){
	long long int n;
	cout<<"Enter a Number : ";
	cin>>n;
	int res = countDigits(n);
	cout<<"Number of Digits in "<<n<<" is "<<res<<endl;
	return 0;
}
