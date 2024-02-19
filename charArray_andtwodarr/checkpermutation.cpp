// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.

// Permutations of each other
// Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

// Example: 
// str1= "sinrtg" 
// str2 = "string"

// The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.

#include<bits/stdc++.h>
using namespace std;
#include<cstring>

//4)
bool isPermutation(char input1[], char input2[]) {
   

    int n1 = strlen(input1);
    int n2 = strlen(input2);

    
    if (n1 != n2){
       return false;
    }

int chrcount[128]={0};


for(int i=0;i<n1;i++){
    chrcount[input1[i]]++;
}

for(int i=0;i<n2;i++){
   chrcount[input2[i]]--;
}

for(int i=0;i<128;i++){
if (chrcount[i] != 0) {
    return false;
  } 
}

return true;
}

//3)//t.c=0(n)
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

/* 1)
   bool isPermutation(char input1[], char input2[]) {
    //Only 6/8 T.c will pass,because suppose if a variable is occuring in str1 3 times and ,occurs 1 time in str2,then also it will give true,but it will be false
    int l1=strlen(input1);
    int l2=strlen(input2);
    
    for(int i=0;i<l1;i++){
        int cnt=0;
        for(int j=0;j<l2;j++){
            if(input1[i] == input2[j]){
                cnt++;
            } 
        }
        if(cnt == 0){
            return false;
        }
    }
    return true;
}

*/
    
 // 2)using sorting-T.C=0(NLOGN)
 //bool isPermutation(char input1[], char input2[]) {
    //  int l1=strlen(input1);
    //  int l2=strlen(input2);
    //  sort(input1,input1+l1);
    //  sort(input2,input2+l2);

    //  if(l1 != l2){
    //      return false;
    //  }
    //  for(int i=0;i<l1;i++){
    //      if(input1[i] !=input2[i]){
    //          return false;
    //      }
    //  }
    //  return true;
 //}


int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}