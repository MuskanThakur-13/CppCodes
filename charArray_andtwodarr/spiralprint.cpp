// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:

// a. First row(left to right)
// b. Last column(top to bottom)
// c. Last row(right to left)
// d. First column(bottom to top)
//  Mind that every element will be printed only once.


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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}

void spiralPrint(int **input, int nRows, int nCols)
{
    int startRow=0;
    int startCol=0;

    while(startRow<nRows && startCol<nCols){

        // printing first row
        for(int i=startCol;i<nCols;i++){
                cout<<input[startRow][i]<<" ";
            
        }
        startRow++;

       //printing last col
         for(int i=startRow;i<nRows;i++){
                cout<<input[i][nCols-1]<< " ";
            
        }
        nCols--;

        //printing last row
        if(startRow<nRows){
            for(int i=nCols-1;i>=startCol;i--){
            cout<<input[nRows-1][i]<<" ";
        }
        nRows--;
        }
        

        //printing first col
        if(startCol<nCols){
            for(int i=nRows-1;i>=startRow;i--){
            cout<<input[i][startCol]<<" ";
        }
        startCol++;
        }
        
    }
}