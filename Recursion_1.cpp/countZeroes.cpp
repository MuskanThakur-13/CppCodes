//count zeroes
//Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

#include<bits/stdc++.h>
int cnt=0;
int countZeros(int n) {
    if(n==0){
        return 1;
    }
    if(n>0 && n<10)
    return cnt;
    
    int lastdigit=n%10;

    if (lastdigit == 0) {
      cnt++;
    }
   int ans=countZeros(n/10);
   
   return ans;
}




