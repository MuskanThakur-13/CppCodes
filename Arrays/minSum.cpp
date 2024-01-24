// Smallest Element
/* 
Write a program that returns minimum element in an array.
Hint : the Math.min method is used to find the minimum of two numbers .
*/

#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	cin>>n;

	int arr[10000];

	//Taking input from array
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i] < min){
			min=arr[i];
		}
	}

	cout<<min;
}
