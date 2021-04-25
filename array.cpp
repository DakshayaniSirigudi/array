#include<iostream>
using namespace std;
int main()
{
	int i,arr[5];
	int *p=arr;
	cout<<"Enter 5 elements"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"entered elements are:"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
