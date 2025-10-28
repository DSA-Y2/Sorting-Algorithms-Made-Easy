#include <iostream>
using namespace std;
/*
This bubble sort implementation help us to 
have best case of time complexity of O(n).
Because it help us to check if 
the array is already sorted (and break) and prevent 
unwanted iterations which reduces time complexity
*/

void bubbleSort(int arr[],int n){
	bool check =0;
	int counter =0;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			counter ++;
			if(arr[j] > arr[j+1]){
				//use builtIn function
				swap(arr[j],arr[j+1]);
				check = 1;
			}
			
			cout << "Did we swap: " << check << endl;
			
		if(check == 0){
			break;
		}
		}
	}
	
	cout << "Running time: " << counter << endl;
	
	for(int z=0; z<n; z++){
		cout << arr[z] << ",";
	}
}

int main(){
	
	int arr[5] = {45,20,30,40,50};
	int n =  sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr,n);
	return 0;
}