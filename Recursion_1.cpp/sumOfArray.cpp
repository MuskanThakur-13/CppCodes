//sum of array(recursive)
// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.

#include<bits/stdc++.h>
int sum(int input[], int n) {
  if(n==1){
    return input[0];
  }

  int ans=sum(input+1,n-1);
  return ans+input[0];

}
