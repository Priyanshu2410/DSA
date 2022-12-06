class Solution {
public:
    string makeGood(string s)
    {
         if(s.size() == 1) return s;
        
        stack<char>st;
        string ans = "";
        
        for(int i = 0;i<s.length();i++){
            st.push(s[i]);
        }
        
        while(!st.empty()){
            
            char top = st.top();
            st.pop();
            if(!st.empty() && top != st.top() && tolower(top) == tolower(st.top())){
              
                st.pop();
            }
            else if(ans!= "" && ans.back() != top && tolower(ans.back()) == tolower(top)){
                ans.pop_back();
            }
            else{
                ans+=top;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;    
    }
};