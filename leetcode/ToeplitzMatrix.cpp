class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        // int row,col;
        // if(matrix[0].size() == 1)
        // {
        //     return true;
        // }
        // if(matrix.size() % 2 == 0)
        // {
        //     row = matrix.size();
        //     col = matrix[0].size();
        // }
        // else
        // {
        //     row = matrix.size()-1;
        //     col = matrix[0].size()-1;
        // }
        // for(int i=0;i<col;i++)
        // {
        //     for(int j=1;j<row;j++)
        //     {
        //         if(matrix[0][i] != matrix[j][i+1])
        //             return false;
        //     }
        // }
        // return true;
        
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0; i<row-1; i++)
        {
            for(int j=0; j<col-1; j++)
            {
                if(matrix[i][j]!=matrix[i+1][j+1])
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};
