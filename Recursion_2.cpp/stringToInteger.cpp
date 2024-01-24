// String To Integer
// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

/*Time Complexity: O(n)
Auxiliary Space: O(n)*/
#include<cstring>
#include<cmath>
using namespace std;

int stringToNumber(char input[]) {
    int len=strlen(input);
    if (len == 1)
        return (input[0] - '0');  //we can use 48 also insteda of '0' like ---> return (input[0] - 48);
 
    // Recursive call for the sub-string
    // starting at the second character
    double y = stringToNumber(input+1);
 
    // First digit of the number
    double x = input[0] - '0';
 
    // First digit multiplied by the
    // appropriate power of 10 and then
    // add the recursive result
    // For example, xy = ((x * 10) + y)
    x = x * pow(10, len - 1) + y;
    return int(x);
}


