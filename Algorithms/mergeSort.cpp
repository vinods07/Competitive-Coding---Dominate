#include <bits/stdc++.h>
using namespace std;

void mergeSort(int A[], int start, int end){
	if(start == end) return;					// base case when array size is 1
	int mid = (start+end)/2;					// Mid point for divide and conquer

	mergeSort(A, start, mid);					// Recursive sorting of left half
	mergeSort(A, mid+1, end);					// Recursive sorting of right half

	// Now we merge above aerrays
	queue<int> q;								// We store Merged array into queue to copy it later
	for(int i=start,j=mid+1; i<=mid || j<=end;){
		if(i<=mid && j<=end) {
			if(A[i]<A[j]) {
				q.push(A[i]);
				i++;
			}
			else{
				q.push(A[j]);
				j++;
			}
		}
		else if(i<=mid){
			q.push(A[i]);
			i++;
		}
		else{
			q.push(A[j]);
			j++;
		}
	}

	// now copy queue into array
	for(int i=start;i<=end;i++){				// Copy back it in original array
		A[i] = q.front();
		q.pop();
	}
}

int main(){
	int A[] = {10, 5, 20, 3, 7, 2, 9, 15};
	mergeSort(A, 0, 7);

	for(int i=0;i<8;i++) cout<<A[i]<<endl;
}