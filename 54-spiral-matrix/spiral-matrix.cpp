class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int top=0;
        int bottom=rows-1;
        int left=0;
        int right=cols-1;
        int direction=0;
        vector<int>ans;
        while(top<=bottom && left<=right)
        {
            if(direction==0)
            {
                for(int i=top;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
          
              else if(direction==1)
            {
                for(int i=top;i<=bottom;i++)
                { 
                   ans.push_back(matrix[i][right]);
                }
                right--;
            }
              else if(direction==2)
            {
                for(int i=right;i>=left;i--)
                { 
                   ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            else if(direction==3)
            {
                for(int i=bottom;i>=top;i--)
                { 
                   ans.push_back(matrix[i][left]);
                }
                left++;
            }
            direction=(direction+1)%4;
        }
        return ans;
        
    }
    
};