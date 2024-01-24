// Problem statement
// For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e, print the first column top to bottom, next column bottom to top and so on.

#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}
void wavePrint(int **input, int nRows, int mCols)
{
    for(int i=0;i<mCols;i++){
        if(i%2 == 0){
            for(int j=0;j<nRows;j++){
                cout<<input[j][i]<<" ";
            }
        }
        else{
            for(int j=nRows-1;j>=0;j--){
                cout<<input[j][i]<<" ";
            }
        }
    }
}