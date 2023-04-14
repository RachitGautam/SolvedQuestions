#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int array[]={1,2,3,4,5};

	for(int i=0;i<5;i++){
		sum+=array[i];
    }
	cout<<"\nThe sum of Array is :"<<sum;
	return 0;
}