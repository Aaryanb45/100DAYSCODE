Given an m x n matrix, return all elements of the matrix in spiral order.
Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
solution:

 class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count = 0;
        int total = row * col;

        int StartingRow=0;
        int StartingCol=0;
        int endingCol=col-1;
        int endingRow=row-1;
        while(count<total)
        {
            //printing the starting row

            for(int index=StartingCol; count < total && index<=endingCol; index++)
            {
                ans.push_back(matrix[StartingRow][index]);
                count++;
            }
            StartingRow++;

            //prinitng the ending column

            for(int index=StartingRow; count < total && index<=endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

             //prinitng the ending row

            for(int index=endingCol; count < total && index>=StartingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //printng the starting column

            for(int index=endingRow; count < total && index>=StartingRow; index--)
            {
                ans.push_back(matrix[index][StartingCol]);
                count++;
            }
            StartingCol++;
        }
        return ans;
        
    }
};
