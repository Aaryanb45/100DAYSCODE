For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.
For eg:-
Sample Input 1:
2
3 4
1 2 3 4
5 6 7 8
9 10 11 12
4 4
1 2 4 5
3 6 8 10
11 12 13 15
16 14 9 7
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4
1 3 11 16 14 12 6 2 4 8 13 9 7 15 10 5 


Output:
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int col=0;col<mCols;col++)
    {
        if(col & 1)
        {
            //odd index ke liye bottom to top 
            for(int rows=nRows-1;rows>=0;rows--)
            {
                ans.push_back(arr[rows][col]);
            }

        }
        else
        {
             //even index ke liye top to bottom 
            for(int rows=0;rows<nRows;rows++)
            {
                ans.push_back(arr[rows][col]);
            }

        }
       

    }
    return ans;
}
