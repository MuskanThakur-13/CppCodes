// Linear Search
/* 
You have been given a random integer array(ARR) of size N, and an integer 'val'. You need to search for the integer 'val' in the given array using 'Linear Search'.
 You have been required to return the index at which 'val' is present in the array. If 'val' has multiple occurrences in the array, then you need to return the index at which the first occurrence of 'val' would be encountered. In case 'val' is not present in the array/list, then return -1.
'Linear search' is a method for finding an element within an array. It sequentially checks each element of the array/list until a match is found or the whole array has been searched.
*/
#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int val)
{
     for(int i=0;i<n;i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int n,val;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>val;
    int res=linearSearch(arr,n,val);
    cout<<res;
}

    
	
