// Binary search(Recursive)
// Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.

// Return -1 if x is not present in the given array. Note : If given array size is even, take first mid.
// Input format :

// Line 1 : Array size

// Line 2 : Array elements (separated by space)

// Line 3 : x (element to be searched)

#include <bits/stdc++.h>
using namespace std;


int search(int input[],int start,int end,int element){
    //base case
    if(start > end){
        return -1;
    }

    int mid=(start+end)/2;

    if(input[mid] == element){
        return mid;
    }
    else if(element > input[mid]){
       return  search(input,mid+1, end, element);
    }
    else{
        return search(input,start, mid-1, element);
    }
    

}
int binarySearch(int input[], int size, int element) {
    int start=0;
    int end=size-1;
    return search(input,start,end,element);
    

}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}


