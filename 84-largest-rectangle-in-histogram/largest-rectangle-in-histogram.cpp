class Solution {
public:
    vector<int>previousElement(vector<int>&v)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans(v.size());
        for(int i=0;i<v.size();i++)
        {
            int curr=v[i];
            while(s.top()!=-1 && v[s.top()]>=curr)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int>NxtSmallerElement(vector<int>&v)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans(v.size());
        for(int i=v.size()-1;i>=0;i--)
        {
            int curr=v[i];
            while(s.top()!=-1 && v[s.top()]>=curr)
            {
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>prev=previousElement(heights);
        vector<int>next=NxtSmallerElement(heights);
        int maxArea=INT_MIN;
        int size=heights.size();

        for(int i=0;i<heights.size();i++)
        {
            int length=heights[i];
            if(next[i]==-1)
            {
                next[i]=size;
            }
            int width=next[i]-prev[i]-1;
            int area=length*width;
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};