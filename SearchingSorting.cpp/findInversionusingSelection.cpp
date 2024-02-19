// Find Inversions using selection sort
//You have a list of numbers that are not in order. You want to find the sum of the differences between the indices of pairs of numbers that are in the wrong order. A pair of numbers is considered to be in the wrong order if the smaller number comes after the larger number in the list.

// Example:
// Input: ‘N’ = 5 
// ‘A’ = [3, 2, 11, 5, 1]

// Output: 6 

#include<iostream>
using namespace std;

int getInversions(int arr[], int n)
{
    int totSum=0;
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j] < min){
                min=arr[j];
                minIndex=j;
            }
        }
        totSum += (minIndex - i);
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    return totSum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    int ans = getInversions(arr, n);
    cout << ans << endl;
    return 0;
}