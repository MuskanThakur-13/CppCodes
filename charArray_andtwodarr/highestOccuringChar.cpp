// For a given a string(str), find and return the highest occurring character.

// Example:
// Input String: "abcdeapapqarr"
// Expected Output: 'a'
// Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
// If there are two characters in the input string with the same frequency, return the character which comes first.

// Consider:
// Assume all the characters in the given string to be in lowercase always.

#include<cstring>
using namespace std;
#include<algorithm>

char highestOccurringChar(char input[]) {
    int len=strlen(input);
    int maxfreq=0;
    int chrfreq[26]={0};

    for(int i=0;i<len;i++){
        int index=input[i]-'a';
        chrfreq[index]++;
        maxfreq=max(maxfreq,chrfreq[index]);
    }

    for(int i=0;i<len;i++){
        int index=input[i]-'a';
        if(chrfreq[index] == maxfreq){
           return input[i];
        }
    }
}

// char highestOccurringChar(char input[]) {
//     int arr[128]={0};
//     int maxFreq=0;
//     int len=strlen(input);

//     for(int i=0;i<len;i++){
//         arr[input[i]]++;
//         maxFreq=max(maxFreq,arr[input[i]]);
//     }
//     for(int i=0;i<len;i++){
//         if(arr[input[i]] == maxFreq){
//             return input[i];
            
//         }
//     }