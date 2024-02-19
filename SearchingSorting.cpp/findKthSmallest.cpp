// Find kth smallest
// You have been given an array/list and a number k. You have to find the kth smallest number.

// Example:
// Input: ‘N’ = 5 , 'k' = 2
// ‘A’ = [3, 2, 11, 5, 1]

// Output: 2

// Explanation: For nums = [3, 2, 11, 5, 1],
// In the given array, smallest element is 1 and 2nd smallest element is 2 and the value of k is 2. So, our output will be 2.

#include<iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    for(int i=0;i<k;i++){
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
    return arr[k-1];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<kthSmallest(arr, n,k)<<endl;
    return 0;


}