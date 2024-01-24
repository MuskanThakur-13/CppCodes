// Arrange Numbers in the array
/*You have been provided with an empty array (ARR) and its size N. The user will only input the value of N, and you don't need to be concerned about the array itself.
Your objective is to fill the array using integer values from 1 to N (inclusive), following the specific order: 1, 3, 5, ..., 6, 4, 2.
Note:
Printing the array is not required. Your task is solely to fill it.*/

#include<iostream>
using namespace std;
void arrange(int arr[], int n)
{
    int start=0;
    int end=n-1;
    int val=1;

    while(start <= end){
        if(val % 2 != 0){
            arr[start]=val;
            start++;
            val++;
        }
        else{
            arr[end]=val;
            end--;
            val++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    arrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
