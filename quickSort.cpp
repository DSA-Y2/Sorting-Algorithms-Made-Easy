#include <iostream>
using namespace std;

/*
Quick sort algorithm uses divide and conquer(Algorithm type) approach 
which works by splitting big problems into smaller problems 
and then after combine the solutions of the smaller problems 
to make a big solution.

Time Complexity (Worst Case): O(n^2)
                (Best Case): O(n log n)
				(Average Case): O(n log n)

Space Complexity: It is O(log n)

steps:
Choose a pivot element from the array.
Partition the array around the pivot:
	=> All elements smaller than pivot go to the left.
	=> All elements greater than pivot go to the right.
Recursively apply the same logic to the left and right parts.
Combine ? since each part becomes sorted, the whole array is sorted.

Notes: This sorting algorithm is not stable meaning it 
can change orders of elements if they have same value (are the same)

Sorting-Type (Comparison based)
*/

int partition(int arr[],int low,int high){
	int i = low-1;
	int j = low;
	for(j; j<=high-1; j++){
		if(arr[j] < arr[high]){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	
	swap(arr[i+1],arr[high]);
	return i+1;
}
void quickSort(int arr[],int low,int high){
	if(low < high){
		int pi = partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}

int main(){
	int arr[8] = {2,10,1,3,4,0,9,8};
	quickSort(arr,0,7);
	for(int i=0; i<=7; i++){
		cout << arr[i] << ",";
	}
	return 0;
}