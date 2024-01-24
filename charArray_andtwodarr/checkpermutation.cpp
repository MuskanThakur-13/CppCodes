// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.

// Permutations of each other
// Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

// Example: 
// str1= "sinrtg" 
// str2 = "string"

// The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.

#include<algorithm>
using namespace std;
#include<cstring>

bool isPermutation(char input1[], char input2[]) {
    int n1 = strlen(input1);
    int n2 = strlen(input2);

    
if (n1 != n2){
       return false;
}

int chrcount[26]={0};
for(int i=0;i<n1;i++){
    int index=input1[i]-'a';
    chrcount[index]++;
}

for(int i=0;i<n2;i++){
    int index=input2[i]-'a';
    chrcount[index]--;
}

for(int i=0;i<26;i++){
if (chrcount[i] != 0) {
    return false;
  }
  
}
return true;
}

/* 
   // Sort both the strings.
//    sort(input1, input1+n1);
//    sort(input2, input2+n2);
    
//     for (int i = 0; i < n1; i++){
//         if (input1[i] != input2[i]){
//             return false;
//         }
//     }
//     return true;
}

*/
    
