#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
	int pivot = arr[high] ;
	int i=low-1;
	int temp;
	for(int j= low;j<high;j++){
		if(arr[j]<pivot){
			i++;
//			swap[ arr[i] and arr[j]
		 temp = arr[i];
		arr[i] = arr[j];
		arr[j] =temp;
		}
		
	}
//	swap arr[i+1] and arr[j] and return arr[i+1] as the new parition.
	temp = arr[i+1];
	arr[i+1]=arr[high];
	arr[high] = temp;
	cout<<arr[i+1]<<" ";
	return i+1;
}
void quick_sort(int arr[], int low,int high){
	if(low<high){
		int p = partition(arr,low,high);
		quick_sort(arr,low,p-1);
		quick_sort(arr,p+1,high);
	}
}


int main(){
	int n=10
	;int arr[]= {9,7,5,11,12,2,14,3,10,6};
	cout<<"pivots are ";
	 quick_sort(arr,0,n-1);
	 cout<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";
	 }
}
