//Rotate Array
// You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
// Note:
// Change in the input array/list itself.You don't need to return or print the elements.

#include<bits/stdc++.h>
using namespace std;
/* Approach 1->T.C=O(n)
S.C=O(n)*/

/* void rotate(int *input, int d, int n)
// {
    // int *arr=new int[n];
    // int k=0;

    // for(int i=d;i<n;i++){
    //     arr[k++]=input[i];
    // }

    // for(int i=0;i<d;i++){
    //     arr[k++]=input[i];
    // }

    // for (int i = 0; i < n; i++) {
    //   input[i] = arr[i];
    // }
    }*/

   // 2nd Approach
   // first reverse whole array,then reverse n-d elements and d elements seperately
   //o(n) time and o(1)space



   void reverse(int *input,int start,int end){
    int i=start,j=end;
    while(i<j)
    {
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}

void rotate(int *input, int d, int n){
    if(n==0)
    {
        return;
    }
    if(d>=n)
    {
        d=d%n;
    }
    reverse(input,0,n-1);
    reverse(input,0,n-d-1);
    reverse(input,n-d,n-1);

}
   

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}