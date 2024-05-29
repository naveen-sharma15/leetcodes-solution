class Solution {
    public int missingNumber(int[] nums) {
        int ans=0;
        for(int i=0;i<=nums.length;i++)
        {
            ans=ans^i;
        }
        for(int x:nums)
        {
            ans=ans^x;
        }
        return ans;
    }
    
}