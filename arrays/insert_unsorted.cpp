
#include <bits/stdc++.h>
using namespace std;

int insert_end( int arr[] , int n , int key , int size){

	if(n>=size)
		return n;

	arr[n] = key;

	return (n+1);
}

int main(){

	int size = 100;
	int arr[ size ];
	
	int posi,key;
	int n=9;

	cin >> key;
	insert_end(arr,n,key,size);

	return 0;
}
