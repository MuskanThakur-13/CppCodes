//ADD BINARY STRINGS
// You have been given two binary strings ‘A’ and ‘B’. Your task is to find the sum of both strings in the form of a binary string.
// Binary strings are the representation of integers in the binary form. For example, the binary strings of 9 and 16 are “1001” and “10000” respectively.


#include<iostream>
using namespace std;
#include<algorithm>
// int last(string a){
//     if(a.size()==0){
//         return 0;
//     }
//     if(a.back() == '0'){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }

// int remove(string &a){
//     if(a.size()>0){
//         a.pop_back();
//     }
// }
// string addBinaryString(string &a, string &b, int n, int m)
// {
//     int carry=0;
//     string res="";
//     while(a.size()>0 || b.size()>0){
//         int sum=last(a)+last(b)+carry;
//         int digit=sum%2;
//         carry=sum/2;
//         if(digit == 0){
//             res.push_back('0');
//         }
//         else{
//             res.push_back('1');
//         }
//         remove(a);
//         remove(b);
//     }

//     if(carry>0){
//         if(carry==0){
//             res.push_back('0');
//         }
//         else{
//             res.push_back('1');
//         }
//     }

//     // string binary_ans="";
//     // while(res.size()>0){
//     //     binary_ans.push_back(res.back());
//     //     res.pop_back();
//     // }
//     // return binary_ans;
//     reverse(res.begin(),res.end());
//     return res;  
// }

//T.C=0(N+M)
//S.C=0(N+M)
// 1)To convert character into integer then subtract by character 0('0)
//2) To convert integer into character then add with character 0('0) {ASCII values are getting added}
//3) if we made like string res,then we can do like res+=to_string(sum%2);
//4)  if we made like string res="",then we will do like res.push_back((sum) %2 + '0)
string addBinaryString(string &a, string &b, int n, int m)
{
    //  To store the sum of binary strings.
    string sum = "";

    int i = 0;

    //  To store the carry while adding the bits.
    int carry = 0;

    while (i < max(n, m))
    {

        //  Initialize the current sum of the bits.
        int curSum = carry;

        if (i < n)
        {
            //  Add the value in the current sum.
            //we are subtracting with 0 to get the integer value,because string is given so,a[i]='1'-'0'=49-48=1,so we will be having integer value
            curSum = curSum + (a[n - 1 - i] - '0');  
        }
        if (i < m)
        {
            //  Add the value in the current sum.
            curSum = curSum + (b[m - 1 - i] - '0');
        }

        //  Append the resulting bit at the end of the string.
        sum.push_back((curSum) % 2 + '0'); // if 2+'0' so =2+48=50(decimal) and decimal 50 is equivalent to character 2,so we have converted integer 2 into character 2 by adding 0

        //  Update the carry value.
        carry = curSum / 2;

        i++;
    }
    if (carry != 0)
    {
        sum.push_back('1');
    }

    //  Reverse the binary string to move the least significant bits at the end of the string.
    reverse(sum.begin(), sum.end());

    return sum;
}