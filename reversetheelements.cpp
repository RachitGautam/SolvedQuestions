#include<iostream>
using namespace std;
int main(){
    int array[100],n,i,j,a;
    cout<<"enter the number of array:";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter numbers"<<i+1<<":";
        cin>>array[i];
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
	{
		a=array[i];
		array[i]=array[j];
		array[j]=a;
	}
	cout<<"\nReverse array"<<endl;
	for(i=0;i<n;i++)
		cout<<array[i]<<" ";


    return 0;
}