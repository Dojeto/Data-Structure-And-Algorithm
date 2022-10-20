class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(int i=0;i<image.size();i++)
        {
            int k = image[i].size()-1;
            for(int j =0;j<image[i].size()/2;j++)
            {
                swap(image[i][j],image[i][k--]);
            }
        }
        
        for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[i].size();j++)
            {
                if(image[i][j] == 0)
                {
                    image[i][j] = 1;
                }
                else if (image[i][j] == 1)
                {
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};
