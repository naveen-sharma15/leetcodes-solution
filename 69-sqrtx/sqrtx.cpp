class Solution {
public:
    long long int mySqrt(int x) {
        int start=0;
        int end=x;
           long long int mid;
        int ans=-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
          long long int square=mid*mid;
          if(square==x)
          {
              return mid;
          }
          if(square<x)
          {
              ans=mid;
               start=mid+1;
          }
          else
          {
            
               end=mid-1;
          }
          
          
        }

         return ans;
    }

};