/*
class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector <int> arr(grid[0].size(),0);
        // if()
        if(grid[0][0] != 1)
        {
            arr[0] = -1;
                
            for(int i=1;i<grid[0].size();i++)
            {
                int index=i;
                for(int j=0;j<grid.size();j++)
                {
                    if(grid[j][index] == 1)
                    {
                        if(grid[j][index] != grid[j][index+1])
                        {
                            arr[i] = -1;
                            break;
                        }
                        arr[i] = ++index;
                    }
                    else
                    {
                        if(grid[j][index] != grid[j][index-1])
                        {
                            arr[i] = -1;
                            break;
                        }
                        arr[i] = --index;
                    }
                }
            }
        }
        // if(grid[0][grid[0].size()-1])
        else
        {
            for(int i=0;i<grid[0].size();i++)
            {
                int index=i;
                for(int j=0;j<grid.size();j++)
                {
                    if(grid[j][index] == 1)
                    {
                        if(grid[j][index] != grid[j][index+1])
                        {
                            arr[i] = -1;
                            break;
                        }
                        arr[i] = ++index;
                    }
                    else
                    {
                        if(grid[j][index] != grid[j][index-1])
                        {
                            arr[i] = -1;
                            break;
                        }
                        arr[i] = --index;
                    }
                }
            }
        }
        if(grid[grid.size()-1][grid[0].size()-1] != -1)
        {
            arr[grid[0].size()-1] = -1;
        }
        return arr;
    }
};
 
Bad Approch need to solve buffer
*/

// better approch - checking each and every row 
class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int row = grid.size(),col= grid[0].size();
        vector <int> arr(col,0);
        vector <int> vis(col,0);
        for(int i=0;i<col;i++)
        {
            arr[i] = i;
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(vis[j] != -1)
                {
                    int index = arr[j];
                    if(grid[i][index]==1)
                    {
                        if(index == col-1 || grid[i][index+1] == -1)
                        {
                            vis[j] = -1;
                            arr[j] = -1;
                        }
                        else
                        {
                            arr[j] = index+1;
                        }
                    }
                    else
                    {
                        if(index == 0 || grid[i][index-1] == 1)
                        {
                            vis[j] = -1;
                            arr[j] = -1;
                        }
                        else
                        {
                            arr[j] = index-1;
                        }
                    }
                }
            }
        }
        return arr;
    }
};

