#include<bits/stdc++.h>
using namespace std;

bool palin(int nm){
	int rev = 0;
	int res;
	int n = nm;
	while(n>0){
		res = n % 10;
		rev = rev*10 + res;
		n = n/10;
		//cout<<rev<<endl;
	}
	//cout<<rev<<endl<<endl;
	return (nm == rev)
}

int main(){
	int num;
	cout<<"Enter a Number : ";
	cin>>num;
	if(palin(num)) cout<<num<<" is a Palindrome Number"<<endl;
	else cout<<num<<" is not a Plaindrome Number"<<endl;
	return 0;
}
