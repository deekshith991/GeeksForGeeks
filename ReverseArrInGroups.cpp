/*
	https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions

*/

#include <iostream>
using namespace std;

void ReverseInGroup(long int arr[], int n , int k) {

	for (int i = 0; i < n ; i += k) {
		//	{1 2 3 4 5}
		int start = i , end = min(i + k - 1, n - 1) ;
		// s=i=0 , end = 1/2 of sub-arr
		while (start <= end) {
			// swaping sub arr
			swap(arr[start], arr[end]);
			start++; end--;
		}


	}
}
void ArrInput(long int arr[] , int n) {

	for ( int i = 0 ; i < n ; i++)
		cin >> arr[i];
}
void ArrOutput(long int arr[], int n) {

	for ( int i = 0 ; i < n; i++)
		cout << arr[i] << " ";
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input", "r", stdin);
	freopen("output", "w", stdout);
#endif

	int n; cin >> n;
	int k ; cin >> k;
	long int arr[n];
	ArrInput(arr, n);
	ReverseInGroup(arr, n, k);
	ArrOutput(arr, n);

}
