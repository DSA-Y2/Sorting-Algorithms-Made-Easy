#include <iostream>
using namespace std;

/*
Insertion sort: It takes one number at a time and insert it into its correct position
--like sorting cards in your hans

Time complexity: O(n^2)
Space complexity: O(1)
Notes: It is great for small or partially sorted arrays
*/

void insertionSort(int arr[],int n){
	/* The variable "key" is the one which stores the 
	element of the array we are going to insert in right place*/

	for(int i=1; i<n; i++){
		int key = arr[i]; // current element to be inserted 
		int j = i-1; // represents element of the left part(sorted part)
		while(j>=0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		
		arr[j+1] = key;
	}
	
	cout << "{";
	for(int z=0; z<n; z++){
	cout << arr[z] << ",";	
	}
	cout << "}";
	
}


int main(){
	int arr[5] = {5,2,8,1,3};
	int n =  sizeof(arr)/sizeof(arr[0]);
	
	insertionSort(arr,n);
	return 0;
}