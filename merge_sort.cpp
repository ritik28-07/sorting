#include<iostream>
using namespace std;



void merge(int arr[], int low, int mid, int high) 
{ 
	int i, j, k; 
	int n1 = mid - low + 1; 
	int n2 = high - mid; 
	int left_arr[n1], right_arr[n2]; 
	for (i = 0; i < n1; i++) 
		left_arr[i] = arr[low + i]; 
	for (j = 0; j < n2; j++) 
		right_arr[j] = arr[mid + 1 + j]; 
	i = 0;
	j = 0;
	k = low;
	while (i < n1 && j < n2) { 
		if (left_arr[i] <= right_arr[j]) { 
			arr[k] = left_arr[i]; 
			i++; 
		} 
		else { 
			arr[k] = right_arr[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) { 
		arr[k] = left_arr[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) { 
		arr[k] = right_arr[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(int arr[], int low, int high) 
{ 
	if (low < high) { 
		int mid = low + (high - low) / 2; 
		mergeSort(arr, low, mid); 
		mergeSort(arr, mid + 1, high); 

		merge(arr, low, mid, high); 
	} 
} 

int main() 
{ 
	int arr[] = { 12, 11, 13, 5, 6, 7 }; 
	int n=6; 
	mergeSort(arr, 0, n - 1); 
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0; 
} 

