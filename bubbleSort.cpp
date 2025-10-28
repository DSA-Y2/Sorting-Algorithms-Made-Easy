#include <iostream>
using namespace std;

/* 
Bubble sort: is just a sorting algorithm 
which compares a number with its neighbouring 
numbers and swaps them until everything is in their right orders

Approach: Swap the adjacent element (neighbouring number)
Time Complexity: O(n^2)
Space Complexity: O(1)
Notes: This algorithm is simple and slow

Let us dive deep how it works in codes
*/

void bubbleSort(int arr[],int n){
	//arr: the parameter of the array to be sorted
	//n : the length of the array
	
	/*the inner loop is there to make 
	sure every element is compared to its neighbouring */
	
	/* the outer loop is there to make 
	sure that an array is completely sorted */
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j] > arr[j+1]){
				// swap
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	// print the array
	
	cout << "{";
	for(int z=0; z<n; z++){
		cout << arr[z] << ",";
	}
	cout << "}";
}

int main(){
	
	int arr[5] = {5,2,8,1,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr,n);
	return 0;
}