#include <bits/stdc++.h>
using namespace std;

void selectionSort(int A[], int n){						// Array A is passed by reference here and n is the length
	int sortedIndex = 0;								// Pivotal index which seperates sorted and unsorted array
	for(int i=0;i<n;i++){
		int min_index = i;								// store the index of min element on the unsorted array
		for(int j=i;j<n;j++){
			if(A[j]<A[min_index]) min_index = j;
		}

		// now we swap min_index and sortedIndex elements
		int temp = A[sortedIndex];
		A[sortedIndex] = A[min_index];
		A[min_index] = temp;

		sortedIndex++;									// Increase the pivotal index
	}
}

int main(){
	int A[] = {10, 5, 20, 3, 7, 2, 9, 15};
	selectionSort(A, 8);

	for(int i=0;i<8;i++) cout<<A[i]<<endl;
}