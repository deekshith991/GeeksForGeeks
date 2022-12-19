
#include <bits/stdc++.h>
using namespace std;

int insert_end( int arr[] , int n , int key , int size){

	if(n>=size)
		return n;

	arr[n] = key;

	return (n+1);
}

int find(int arr[],int key,int size){

	for(int i = 0 ; i < size ; i++ ){
		if{arr[i]==key}
			return i+1;
	}

	return -1;
}

int main(){

	int size = 100;
	int arr[ size ]={1,2,3,4,5,6,7,8};
	
	int posi,key;
	int n=9;

	cin >> key;
	insert_end(arr,n,key,size);

	int posi = find(arr,23,9);
	return 0;
}
