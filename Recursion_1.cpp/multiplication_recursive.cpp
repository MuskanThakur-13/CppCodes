// //multiplication (recursive)
// Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.

#include<bits/stdc++.h>
int multiplyNumbers(int m, int n) {
    if(m==0 || n==0){
        return 0;
    }

    int ans=multiplyNumbers(m,n-1);
    return ans+m;
}


