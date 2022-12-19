
#include <bits/stdc++.h>
using namespace std;

void SUMARR(int a[], int n , long long int s) {

	int start = 0 , end = 0;
	long long int sum = 0;

	for (int i = 0 ; i <= n ; i++) {
		if (sum == s) {
			cout << start + 1 << " " << end  << endl;
			break;
		}
		else if (sum < s) {
			sum = sum + a[i] ;
			end++;
		}
		else {
			while (sum > s) {
				sum = sum - a[start];
				start ++;
				if (sum == s)
					break;
			}
		}

	}
}

int main() {

	int a[5] = {1, 2, 3, 7, 5};

	SUMARR(a, 5 , 12);
}