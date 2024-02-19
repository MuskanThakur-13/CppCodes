// Reverse each word
//Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed. A word is a combination of characters without any spaces.

// Example:
// Input Sentence: "Hello I am Aadil"
// The expected output will print, "olleH I ma lidaA".
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 0 <= N <= 10^6
// Where N is the length of the input string.

// All the words in string are separated by a single space.

// String does not contain any leading or trailing spaces.

#include<iostream>
using namespace std;
int length(char input[]){
    int count=0;
    for(int i=0;input[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverse(char input[],int start,int end){
    while(start<end){
        int temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        start++;
        end--;
    }
}

void reverseEachWord(char input[]) {
    int len=length(input);

    int k=0; //ending index of word
    int l=0; //starting index of word

    for(int i=0;i<len;i++){
        if(input[i] == ' '){
            k=i-1;
            reverse(input,l,k);
            l=i+1;

        }
    }
    k=len-1;
    reverse(input,l,k);
}


//*************************************Method1**************************
// void reverseEachWord(char input[]) {
//     int len=strlen(input);
//     int ptrA=0;
//     int ptrB=0;
//     int i=0;
//     while(true){
//         if(input[i] == ' '|| input[i] =='\0' ){
//             ptrB=i-1;
//             while(ptrA<=ptrB){
//                 char temp=input[ptrA];
//                 input[ptrA]=input[ptrB];
//                 input[ptrB]=temp;
//                 ptrA++;
//                 ptrB--;
//             }
//             ptrA=i+1;  
//         }
//         if(input[i]=='\0'){
//             break;
//         }
//         i++;
//     }
    
    
// }


// *********************************************Method 2***************************
// void reverseEachWord(char input[]) {
//     int len=strlen(input);
//     int ptrA=0;
//     int ptrB=0;
//     for(int i=0;i<len;i++){
//         if(input[i] == ' ' ){
//             ptrB=i-1;
//             while(ptrA<=ptrB){
//                 char temp=input[ptrA];
//                 input[ptrA]=input[ptrB];
//                 input[ptrB]=temp;
//                 ptrA++;
//                 ptrB--;
//             }
//             ptrA=i+1;  
//         }
//     }
    
//     ptrB=len-1;
//     while(ptrA<=ptrB){
//                 char temp=input[ptrA];
//                 input[ptrA]=input[ptrB];
//                 input[ptrB]=temp;
//                 ptrA++;
//                 ptrB--;
//     }
    
// }

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}