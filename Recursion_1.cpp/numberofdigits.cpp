//Number of digits

// You are given a number 'n'.
// Return number of digits in ‘n’.
// Example:
// Input: 'n' = 123

// Output: 3

// Explanation:
// The 3 digits in ‘123’ are 1, 2 and 3. 

#include<bits/stdc++.h>
int count(int n){
    //base Case
    if(n/10== 0){
        return 1;
    }
    int ans=count(n/10);
    return ans+1;
}
