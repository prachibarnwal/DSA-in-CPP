//time complexity of bubble sort is : O(n**2)

#include<iostream>
using namespace std;
int main()
{
	int n, temp;
	cout<<"Enter the Size of the Array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Array Elements : ";
	for(int i =0;i<n;i++)
		cin>>arr[i];
	
	cout<<"Array Elements are : ";
	for(int i =0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;

	for(int i = 1;i<=n-1;i++)
	{
		for(int j = 0; j < n - i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout<<"Sorted Array Elements in Increasing Order are : "<<endl;
	for(int i =0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;

	return 0;
}
