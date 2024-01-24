// // Triplet sum
// You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the array/list which sum to X.

// Note :
// Given array/list can contain duplicate elements.

#include<bits/stdc++.h>
using namespace std;
//T.C=0(n^2)
//S.C=0(1)


int tripletSum(int *arr, int n, int num){
	sort(arr,arr+n);
	int numpairs=0;
	
    for(int i=0; i<n-1; i++){
        int start = i+1, end = n-1;
        while(start<end){
            if(arr[start]+arr[end] == num-arr[i]){
               int index = end;
                while(arr[index] == arr[end] && index > start){
                    numpairs ++;
                    index--;
                }
                start++;
            } else if(arr[start]+arr[end] > num-arr[i]){
            	end--;
            } else {
                start++;
            }
        }
    }
    return numpairs;
	
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;
        

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}