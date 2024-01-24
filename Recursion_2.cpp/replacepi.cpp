//Replace pi
/*Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. */


// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>
using namespace std;
void replacePi(char input[]) {

	 if(input[0]=='\0')
        return;
		
    if(input[0]=='p' && input[1]=='i'){
        input[0]='3';
        input[1]='.';
        
        int size=strlen(input);
        for(int i=size+2;i>1;i--){
            input[i]=input[i-2];
        }
        input[2]='1';
        input[3]='4';
    }
    
    replacePi(input+1);

}


