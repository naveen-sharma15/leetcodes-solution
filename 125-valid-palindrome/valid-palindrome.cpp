class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
     for(int i=0;i<s.length();i++)
     {
         if(s[i]>='a'&& s[i]<='z'||s[i]>='A'&& s[i]<='Z')
         {
             s[i]=tolower(s[i]);
             ans.push_back(s[i]);
         }
         else if(s[i]>='0'&& s[i]<='9')
         {
             ans.push_back(s[i]);
         }
     }
      int ss=0;
     int e=ans.length()-1;
     while(ss<e)
     {
         if(ans[ss]!=ans[e])
         {
             return false;
         }
         ss++;
         e--;
     }
     return true;
    }
};