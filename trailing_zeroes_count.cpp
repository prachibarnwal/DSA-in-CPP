#include<bits/stdc++.h>
using namespace std;

int countZero(int n){
	int fact = 1;
	for(int i = 2;i<=n;i++)
		fact*= i;
	
	cout<<"Factorial of "<<n<<" is "<<fact<<endl;
	int tz = 0;
	while(fact % 10 == 0)
	{
		tz++;
		fact/=10;
	}
	return tz;
}

int main(){
	int num;
	cout<<"Enter the Number : ";
	cin>>num;
	int nm = countZero(num);
	cout<<"Number of Trailing Zeroes are : "<<nm<<endl;
	return 0;
}
