
#include <bits/stdc++.h>
using namespace std;


void ArrInput(int arr[], int n){

	for(int i=0 ; i<n ; i++)
		cin >> arr[i] ;
}
void ArrOutput(int arr[] , int n ){

	for ( int i = 0 ; i < n ; i++)
		cout << arr[i] << " " ;
	cout << endl;
}

int main(){

	int size = 100;

	int array[size];

	ArrInput(array,15);
	ArrOutput(array,15);

	return 0;
}
