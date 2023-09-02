class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
 int start=0;
int end=arr.size()-1;
int mid=start+(end-start)/2;
while(start<=end)
{
    if(start==end)
    {
        return arr[start];//single element
    }
    //2.case mid even or mid odd
    if(mid%2==0)
    {
        if(arr[mid]==arr[mid+1])
        {
            start=mid+2;
        }
        else
        {
            end=mid;
        }
    }
    else{
    if(arr[mid]==arr[mid-1])
    {
    start=mid+1;
    }
    else
    {
        end=mid-1;
    }
    }
    mid=start+(end-start)/2;
}
return -1;
        
    }
};