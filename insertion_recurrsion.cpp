#include<iostream>
using namespace std;

void recursion(int arr[],int n){
	if (n <= 1) 
        return; 
	recursion(arr,n-1);
	
//	temp=arr[i];
	int j=n-2;
	int key= arr[n-1];
	while(j>=0 && arr[j]>key)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=key;
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	recursion(arr,n);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
