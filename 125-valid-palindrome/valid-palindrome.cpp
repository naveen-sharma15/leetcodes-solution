class Solution {
private:
    bool validch(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        {
            return 1;
        }
        return 0;

    }

    char tolower(char ch)
    {
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
        {
            return ch;
        }
        else
        {
           char temp=ch-'A'+'a';
           return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(validch(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        for(int i=0;i<temp.length();i++)
        {
            temp[i]=tolower(temp[i]);
        }

        int i=0;
        int j=temp.size()-1;
        while(i<j)
        {
            if(temp[i]!=temp[j])
            {
                return false;
            }
            i++,j--;
        }
        return true;
    }
};