#include<iostream>
using namespace std;
int main()
{
	int n, num;
	cout<<"Enter Size of the Array : ";
	cin>>n;
	cout<<"Enter Array ELements : ";
	int arr[n];
	for(int i = 0;i<n;i++)
		cin>>arr[i];
	cout<<"Array Elements are : ";
	for(int i =0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl<<endl;
	cout<<"Enter the Number to be Searched : ";
	cin>>num;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == num)
		{
			cout<<"Element Found at Index : "<<i<<endl;
			break;
		}
	}
	
	return 0;
}
