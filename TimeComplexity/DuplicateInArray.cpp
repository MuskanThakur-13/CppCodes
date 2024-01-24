// Duplicate in array
//You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3, and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
//Note :
//Duplicate number is always present in the given array/list.

#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int *arr, int n)
{
    if(n==0){
        return 0;
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
}

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}