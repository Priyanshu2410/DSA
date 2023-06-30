class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
            vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                v.push_back(a[i]);
            }
        }
         for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                v.push_back(a[i]);
            }
        }
         for(int i=0;i<n;i++)
        {
            if(a[i]==2)
            {
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            a[i]=v[i];
        }
    }
};