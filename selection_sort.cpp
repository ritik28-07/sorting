#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	int min,min_index;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
//	2 5 4 8 9
	for(int i=0;i<n-1;i++){
		min = arr[0];
		min_index =i;
		for (int j = i+1; j < n; j++) 
          if (arr[j] < arr[min_index]) 
            min_index = j; 
            
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
		
		
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
