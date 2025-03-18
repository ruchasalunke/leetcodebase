class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int tot = row * col;
        int count = 0;

        int startRow = 0;
        int endRow = row - 1;
        int startCol = 0;
        int endCol = col - 1;

        while (count < tot) 
        {
            // print first row
            for (int index = startCol; count < tot && index <= endCol; index++) 
            {
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            // print last column
            for (int index = startRow; count < tot && index <= endRow; index++) 
            {
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            //print last row
            for(int index = endCol; count < tot && index >= startCol; index--)
            {
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            //print first column
            for(int index = endRow; count < tot && index >= startRow; index--)
            {
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};
