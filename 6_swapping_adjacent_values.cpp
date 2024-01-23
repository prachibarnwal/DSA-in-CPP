#include<iostream>
using namespace std;
int main()
{
	int n, temp;
	cout<<"Enter Size of the Array : ";
	cin>>n;
	int as[n];
	cout<<"Enter Array Elements : ";
	for(int i =0;i<n;i++)
		cin>>as[i];
	
	for(int i=0; i<n-1;i+=2)
	{
		temp = as[i];
		as[i] = as[i+1];
		as[i+1] = temp;
	}
	
	for(int i=0; i<n; i++)
		cout<<as[i]<<"\t";
	cout<<endl;
	return 0;
}
