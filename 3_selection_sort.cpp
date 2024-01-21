//time complexity of selection sort is : O(n**2)

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

	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"Sorted Array Elements in Increasing Order are : "<<endl;
	for(int i =0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;

	return 0;
}
