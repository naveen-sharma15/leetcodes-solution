class Solution {
public:
   void merge(vector<int>& nums,int s,int e,int m)
   {
    int i=s,j=m+1;
    vector<int>temp;
    while(i<=m&&j<=e)
    {
          if(nums[i]<=nums[j])
          {
                  temp.push_back(nums[i++]);
          }
          else 
          {
               temp.push_back(nums[j++]);
          }
    }
    while(i<=m)
    {
              temp.push_back(nums[i++]);
    }
    while(j<=e)
    {
 temp.push_back(nums[j++]);
    }
    for(int i=s;i<=e;i++)
     nums[i]=temp[i-s];
     return;

   }
   void mergesort(vector<int>& nums,int s,int e)
   {
       if(s>=e)
       {
           return;
       }

       int m=(s+e)/2;
       mergesort(nums,s,m);
       mergesort(nums,m+1,e);

       merge(nums,s,e,m);
   }
    vector<int> sortArray(vector<int>& nums) {
        // int s=0;
        // int e=nums.size()-1;
       mergesort(nums, 0, nums.size() - 1); 
      return  nums;
    }
};