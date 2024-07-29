class Solution {
    public int check(int n)
    {
          int s=0;
        while(n!=0)
        {
            int d=n%10;
            s+=d*d;
            n=n/10;

        }
        return s;
    }
    public boolean isHappy(int n) {
      int temp=n;
      while(temp>9)
      {
        temp=check(temp);
      }
      if(temp==1 || temp==7)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
}