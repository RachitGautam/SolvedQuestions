#include<iostream>
using namespace std;
int main()
{
	int array[100],n,i,temp;
	cout<<"Enter number of elements you want to insert ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>array[i];
	}
	temp=array[0];
	array[0]=array[n-1];
	array[n-1]=temp;
	cout<<"\nArray after swapping"<<endl;
	for(i=0;i<n;i++)
		cout<<array[i]<<" ";
	return 0;
}