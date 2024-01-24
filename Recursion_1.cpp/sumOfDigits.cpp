// Write a recursive function that returns the sum of the digits of a given integer.
#include<bits/stdc++.h>
int sumOfDigits(int n) {
// if(n== 0){
//     return 0 ;
// }

// int sum=n%10;

// int ans=sumOfDigits(n/10);
// return ans+sum;

// another method
if (n <= 9) {
  return n;
}

return n % 10 + sumOfDigits(n / 10);
}

