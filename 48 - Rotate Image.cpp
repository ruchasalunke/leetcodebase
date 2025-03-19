class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        //transpose of matrix
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
                swap(matrix[i][j], matrix[j][i]);
        }

        //reverse matrix
        for(int i=0; i<n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};
