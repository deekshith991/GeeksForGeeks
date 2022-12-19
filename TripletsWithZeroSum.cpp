
/*
https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1?page=1&difficulty[]=-1&category[]=Arrays&sortBy=submissions
*/

#include <bits/stdc++.h>
using namespace std;

bool Triplets(int arr[] , int n) {

	int sum = 0 , f;

	for (int i = 0 ; i < n ; i++) {
		for ( int j = i + 1 ; j < n ; j++ ) {
			f = -(arr[i] + arr[j]);
			cout << f << endl;
			cout << ":jkdjbs : " << binary_search(arr + j, arr + n, f) << endl;
			if (binary_search(arr + j, arr + n, f)) {
				return 1 ;
			}
			else {
				f = 0;
			}
		}
	}
	return f;
}

int main() {
	int arr[] = {20, 30, -50};
	cout << ":jkdjbs : " << binary_search(arr , arr , -50) << endl;
	cout << Triplets(arr, 3);

}