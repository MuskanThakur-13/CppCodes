//Selection sort

// T.C=0(N^2)
// S.C=0(1)

// In selection sort,sorting occurs in increasing order,element from start gets at correct position first.

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < min){
                min=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}