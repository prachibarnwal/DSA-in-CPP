#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Size of the Array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Array Elements : ";
	for(int i = 0;i<n;i++)
		cin>>arr[i];
	int cnt = 0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i] % 5 == 0)
			cnt++;
	}
	cout<<"Total Elements Divisible by 5 are : "<<cnt<<endl;
	return 0;
}
