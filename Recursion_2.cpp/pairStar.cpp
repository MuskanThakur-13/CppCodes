// pair star

// Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

// Change in the given string itself. So no need to return or print the changed string.
#include<cstring>
void pairStar(char input[]) {
    // Write your code here
     if(input[0]=='\0')
        return;

     if(input[0] != input[1]){ 
        pairStar(input+1);
    }

    if(input[0] == input[1]){ 
        int size=strlen(input);
        for(int i=size+1;i>1;i--){
            input[i]=input[i-1];
        }
        input[1]='*';
    }
    
    pairStar(input+2);

}
    


