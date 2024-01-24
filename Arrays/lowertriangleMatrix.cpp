#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    
    int i, j; 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < n; j++) 
        { 
            if (i < j) 
            { 
                cout << "0" << " "; 
            } 
            else
            cout << arr[i][j] << " "; 
        } 
        cout << endl; 
    } 
}
