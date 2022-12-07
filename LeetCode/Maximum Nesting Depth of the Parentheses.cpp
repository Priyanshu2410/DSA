class Solution {
public:
    int maxDepth(string s)
    {
     int maxm = 0;
        int count = 0;
        
        for(size_t i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                count++;
            } else if (s[i] == ')') {
                count--;
            }
            maxm = std::max(count, maxm);
        }
        
        return maxm;
    }
};