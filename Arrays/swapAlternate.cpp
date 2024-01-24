//Swap alternate
/*You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array.
You don't need to print or return anything, just change in the input array itself.

Sample Input 1:
6
9 3 6 12 4 32
Sample Output 1 :
3 9 12 6 32 4
Sample Input 2:
9
9 3 6 12 4 32 5 11 19
Sample Output 2 :
3 9 12 6 32 4 11 5 19 
*/

#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    int i=0;
    int start=1;
	while(start<=size/2){
		swap(arr[i],arr[i+1]);
		i=i+2;
        start++;
	}
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}