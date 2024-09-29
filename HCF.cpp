// to find HCF / GCD of two numbers
// time complexity is : O(min(a,b))

#include<bits/stdc++.h>
using namespace std;

//naive solution
int HCF(int a, int b){
	int res; 
	if(a > b) res = a;
	else if( b> a) res = b;
	
	while(res >= 0){
		if(a%res == 0 && b%res == 0)
			break;
		res--;
	}
	return res;
}

int main(){
	int a,b;
	cout<<"Enter Two Numbers : ";
	cin>>a>>b;
	int hcf = HCF(a,b);
	cout<<"HCF IS : "<<hcf<<endl;
	return 0;
}
//Euclidean Algorithm
int GCD(int a, int b){
	while(a != b){
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}

//Optimized Implementation of Euclidean Algorithm
int gcd(int a, int b){
	if(b == 0)
		return 0;
	else
		return gcd(b, a%b);
}
