//Find uinque element
// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.
// Note:
// Unique element is always present in the array/list according to the given condition.

#include<bits/stdc++.h>
using namespace std;

//T.C=O(nlogn)
// S.C=O(1)
int findUnique(int *arr, int n) {
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(arr[i] != arr[i+1] || i==n-1){
            return arr[i];
        }
        else{
            i++;
        }
    }  
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}