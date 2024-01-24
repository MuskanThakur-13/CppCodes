//Geometric sum
//Given k, find the geometric sum i.e.
//1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 

#include<bits/stdc++.h>
#include <cmath>
double geometricSum(int k) {
    if(k==0){
        return 1;
    }
    double ans=1/(double)pow(2,k)+geometricSum(k-1);
    return ans;
}


