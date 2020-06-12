#include <bits/stdc++.h>
using namespace std;

void selectionSort(int A[], int n){
	int sortedPos = 0;
	for(int i=0;i<n;i++){
		int minimum_index = i;
		for(int j=i;j<n;j++){
			if(A[j] < A[minimum_index]) minimum_index = j;
		}
		// swap the two elements
		int temp = A[sortedPos];
		A[sortedPos] = A[minimum_index];
		A[minimum_index] = temp;
		sortedPos++;
	}
}

int main(){
	int A[] = {10, 5, 20, 3, 7, 2, 9, 15};
	selectionSort(A, 8);

	for(int i=0;i<8;i++) cout<<A[i]<<endl;
}