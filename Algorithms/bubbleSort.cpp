#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int A[], int n){
	bool sorted = false;				// end the while loop when sorted is true

	while(!sorted){
		bool check = true;				// check variable tells whether the array is sorted in the current iteration
		for(int i=0;i<n-1;i++){
			if(A[i]>A[i+1]){
				// swap
				int temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				check = false;			// make check false to tell that array is not sorted currently
			}
		}
		if(check) sorted = true;		// if check is true means that array is sorted

	}
}

int main(){
	int A[] = {10, 5, 20, 3, 7, 2, 9, 15};
	bubbleSort(A, 8);

	for(int i=0;i<8;i++){
		cout<<A[i]<<endl;
	}
}