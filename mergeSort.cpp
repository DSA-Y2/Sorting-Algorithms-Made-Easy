#include <iostream>
using namespace std;

/* 
Merge sort uses the approach of divide and conquer(Algorithm type)

Merge Sort works by recursively splitting the array into halves until each 
sub-array has only one element, then merging them in sorted order.

Steps:

Divide the array into two halves.
Conquer by recursively sorting both halves.
Combine by merging sorted halves into a single sorted array.


Time Complexity (Worst Case): O(nlogn)
                (Best Case): O(n log n)
				(Average Case): O(n log n)
Space Complexity O(n)
Sorting-Type: Comparison based

Avoid Merge Sort when:
Memory is limited
*/

void printArray(int arr[],int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << ",";
	}
}

/*
"s" stands for start
"e"  stands for end
*/
void mergeArray(int arr[],int left[],int right[],int s,int e ){
	int mid = (s+e)/2;
	int i = s;
	int j = mid+1;
	int k = s;
	
	while(i<=mid && j<=e){
		if(left[i] < right[j]){
			arr[k] = left[i];
			i++;
			k++;
		}else{
			arr[k] = right[j];
			j++;
			k++;
		}
	}
	
	while(i<=mid){
		arr[k] = left[i];
		k++;
		i++;
	}
	
	while(j<=e){
		arr[k] = right[j];
		k++;
		j++;
	}
	
}


void mergeSort(int arr[],int s,int e){
	if(s>=e){
		return;
	}
	
	int mid = (s+e)/2;
	int left[100]; 
	int right[100];
	
	for(int i=0; i<=mid; i++){
		left[i] = arr[i];
	}
	
	for(int j=mid+1; j<=e; j++){
		right[j] = arr[j];
	}
	
	mergeSort(left,s,mid);
	mergeSort(right,mid+1,e);
	mergeArray(arr,left,right,s,e);
}


int main(){
	int arr[7] = {2,3,1,4,5,8,7};
	mergeSort(arr,0,6);
	printArray(arr,7);
	return 0;
}