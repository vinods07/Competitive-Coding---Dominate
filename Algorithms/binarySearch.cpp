#include <bits/stdc++.h>
using namespace std;

// Recursive Function for binary search
// binarySearch function requires x, array, start index, end index
bool binarySearch(int x, int arr[], int start, int end){
	if(start==end && arr[start]==x) return true;		// Base condition
	else if(start<end){
		int mid = (start+end)/2;						// finding mid
		if(arr[mid]==x) return true;					// checking if mid element is x
		else if(arr[mid]<x) return binarySearch(x, arr, mid+1, end);	// right half search
		else return binarySearch(x, arr, start, mid-1);					// left half search
	}
	else return false;									// x not found
}

int main(){
	int arr[] = {1, 5, 20, 35, 50, 65, 70};
	int x = 50;
	if(binarySearch(x, arr, 0, 6)) cout<<"Found\n";
	else cout<<"Not Found\n";
}