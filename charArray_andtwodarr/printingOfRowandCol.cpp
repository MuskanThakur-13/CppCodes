//Taking the input in 2D Array and printing the array rowwise and columnwise
#include<bits/stdc++.h>
using namespace std;

int main(){
    //creation of 2D array of constant size
    int arr[100][100];
    //taking size of row and column
    int row,col;
    cin>>row>>col;

    //Taking input in 2D array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // printing the array rowwise(row remains constant and column varies)
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // printing the array Columnwise(column remains fixed and row varies)
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}