// x to the power n
//Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
//Do this recursively.

int power(int x, int n) {
 //base case
 if(n ==0){
   return 1;
 }

int ans= power(x,n-1);
return x*ans;
}
