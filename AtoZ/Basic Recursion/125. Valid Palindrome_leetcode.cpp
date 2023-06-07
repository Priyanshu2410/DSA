class Solution {
public:

    bool checkpalindrome(int i,vector<char>&ch,int n)
    {
        if(i>=n/2) 
         return true;

          if(ch[i]!=ch[n-i-1])
           return false;

        return checkpalindrome(i+1,ch,n);
    }

    bool isPalindrome(string s) {
        vector<char>ch;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0'&&s[i]<='9'))
            ch.emplace_back(s[i]);
            else if(s[i]>='A' && s[i]<='Z')
            {
                char lower=tolower(s[i]);
                ch.emplace_back(lower);
            }
        }
        int len=ch.size(); 
        if(checkpalindrome(0,ch,len)==true)
        return true;
       else
       return false;
    }
};