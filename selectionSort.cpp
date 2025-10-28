#include <iostream>
using namespace std;

/*

Selection sort: it is a sorting algorithm 
which is all about finding the smallest element and placing it at the beginning 
and repeat the process for the entire array.

Approach: Find minimum element (minIndex)
and place it at the beginning

Time Complexity: O(n^2)
Space Complexity: O(1)
Notes: It contains few swaps compared to bubble sort

This algorithm is unstable 
(An algorithm is said to be unstable if it can change the order of equal elements)
*/

void selectionSort(int arr[],int n){
	/* We are going to create the 
	variable "minIndex" which will have index of element
	we consider as the smallest we will compare it to other
	elements in the array and if we find the one which is less
	than it we place that element at the beginning (we switch indexes) */
	
	for(int i=0; i<n-1; i++){
		int minIndex = i;
		/* j = i+1 we are taking the element on i with another 
		on right i+1 to see if there a smallest one in 
		where arr[i] > arr[j] so that we can place it in its place */
		
		for(int j=i+1; j<n; j++){
			if (arr[minIndex] > arr[j]){
				minIndex = j;
			}
		}
			
			// place it at the right place
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
	}
	
	/*
	We such throught the entire 
	array we look for the smallest 
	element and place it at the beginning
	*/
	
	cout << "{";
	for(int z=0; z<n; z++){
		cout << arr[z] << ",";
	}
	cout << "}";
}

int main(){
	
	int arr[5] = {5,2,8,1,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	selectionSort(arr,n);
	return 0;
}