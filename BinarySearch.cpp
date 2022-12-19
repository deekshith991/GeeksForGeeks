
/*
	 https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions
*/
#include <iostream>
using namespace std;

void BinarySearch(int arr[], int n , int key ) {

	int start = 0 , end = n - 1;
	int mid = start - (end - start) / 2;

	while (start <= end) {

		if (arr[mid] == key)
			return mid;
		else if (arr[mid] >= )
			end = mid - 1;
		else
			start = mid + 1;

		mid = start + (end - start) / 2;
	}
	return -1;
}

int main() {

	int arr[] = {3, 34, 65, 7, 2, 6, 9};
	int key = 56;

	int result = BinarySearch(arr[], arr.size(), key);
	cout << result ;
}