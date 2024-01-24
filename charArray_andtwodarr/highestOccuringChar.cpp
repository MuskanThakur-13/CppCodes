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
    sort(input,input+len);

    int chrfreq[26]={0};

    for(int i=0;i<len;i++){
        int index=input[i]-'a';
        chrfreq[index]++;
    }

    int max=0;
    int index=0;
    for(int i=0;i<26;i++){
        if(chrfreq[i]>max){
            max=chrfreq[i];
            index=i;
        }
    }
    char ch=index + 97;
    return ch;
}