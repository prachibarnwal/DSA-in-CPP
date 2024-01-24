#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Size of the Array : ";
	cin>>n;
	int as[n], a, d;
	cout<<"Enter Array Elements : ";
	for(int i =0;i<n;i++)
		cin>>as[i];
	
	for(int i=0; i<n-1; i++)
	{
		if(as[i] <= as[i+1])
			a++;
		else if(as[i] >= as[i+1])
			d++;
	}
	cout<<a<<"\t"<<d<<endl;
	if(a == n - 1)
		cout<<"Array is Sorted in Ascending Order"<<endl;
	else if( d == n - 1)
		cout<<"Array is Sorted in Descending Order"<<endl;
	else
		cout<<"Array is Not Sorted "<<endl;
	return 0;
}
