// Print Numbers
// Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    //base case
    if(n<1){
        return ;
    }
    print(n-1);
    cout<<n<<" ";
}
