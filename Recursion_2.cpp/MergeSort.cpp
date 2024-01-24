// Merge sort
// You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.
// You must sort the elements between 'l' and 'r'.
// Note:
// Change in the input array itself. So no need to return or print anything.
// Example:
// Input: ‘N’ = 7,
// 'ARR' = [2, 13, 4, 1, 3, 6, 28]

// Output: [1 2 3 4 6 13 28]

// Explanation: After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int l,int r){
    
    int mid=(l+r)/2;
    int *temp=new int[r-l+1];
    int i=l;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=r){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    while(i<= mid){
        temp[k++] = arr[i++];
    }

    while(j<= r){
        temp[k++] = arr[j++];
    }

    int m=0;
    while(m < k){
        arr[l+m]=temp[m++];
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr,l,r);

}