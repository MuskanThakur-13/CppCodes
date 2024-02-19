/*
****************************Print like a wave*******************************************
For a given two-dimensional integer array of size (N x M), print the array in a sine wave order, i.e, print the first column top to bottom, next column bottom to top and so on.

ALTIMAGE

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^3
0 <= M <= 10^3
Time Limit: 1sec
Sample Input 1:
3 4 
1  2  3  4 
5  6  7  8 
9 10 11 12
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4
Sample Input 2:
5 3 
1 2 3 
4 5 6 
7 8 9 
10 11 12 
13 14 15
Sample Output 2:
1 4 7 10 13 14 11 8 5 2 3 6 9 12 15 */

#include<iostream>
using namespace std;

void wavePrint(int input[][1001], int nRows, int mCols)
{
    int startrw=0;
    int startcol=0;
    int endrw=nRows-1;
    int endcl=mCols-1;

   while(startcol<=mCols-1){
       if(startcol %2 ==0){
        for(int i=startrw;i<=endrw;i++){
        cout<<input[i][startcol]<<" ";
    }
    startcol++;
    startrw=nRows-1;
    endrw=0;

    }
    else{
        for(int i=startrw;i>=endrw;i--){
        cout<<input[i][startcol]<<" ";
    }
    startcol++;
    startrw=0;
    endrw=nRows-1;

    }
   }
    
}
int main()
{
	
		int row, col;
		cin >> row >> col;
		int input[row][1001];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	
}

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int row, col;
// 		cin >> row >> col;
// 		int **input = new int *[row];
// 		for (int i = 0; i < row; i++)
// 		{
// 			input[i] = new int[col];
// 			for (int j = 0; j < col; j++)
			
// 			{
// 				cin >> input[i][j];
// 			}
// 		}
// 		wavePrint(input, row, col);
// 		cout << endl;
// 	}
// }
// void wavePrint(int **input, int nRows, int mCols)
// {
//     for(int i=0;i<mCols;i++){
//         if(i%2 == 0){
//             for(int j=0;j<nRows;j++){
//                 cout<<input[j][i]<<" ";
//             }
//         }
//         else{
//             for(int j=nRows-1;j>=0;j--){
//                 cout<<input[j][i]<<" ";
//             }
//         }
//     }
// }
