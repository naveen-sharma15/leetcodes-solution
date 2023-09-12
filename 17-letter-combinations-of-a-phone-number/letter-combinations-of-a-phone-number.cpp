class Solution {
public:
    void solve(vector<string>&ans,int index,string output,string digits,vector<string>&map)
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        int digit=digits[index]-'0';
        string value=map[digit];
        for(int i=0;i<value.length();i++)
        {
            char ch=value[i];
            //include
            output.push_back(ch);
            solve(ans,index+1,output,digits,map);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
        return ans;
        int index=0;
        string output="";
        vector<string>map(10);
        map[2]="abc";
        map[3]="def";
        map[4]="ghi";
        map[5]="jkl";
        map[6]="mno";
        map[7]="pqrs";
        map[8]="tuv";
        map[9]="wxyz";

        solve(ans,index,output,digits,map);
        return ans;        
    }
};