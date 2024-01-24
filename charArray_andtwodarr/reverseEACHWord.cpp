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