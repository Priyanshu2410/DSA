class Solution {
public:
  vector<int> nextelement(vector<int>& heights, int n )
{
    stack<int>st;
    st.push(-1);
    vector<int>ans(n);
    for(int i =n-1;i>=0;i--)
    {
        int curr= heights[i];
        while(st.top()!=-1 && heights[st.top()]>=curr)
        {
            st.pop();
        }
        if(st.top()==-1)
        {
            ans[i]=n;
        }
        else
        {
            ans[i]=st.top();
        }
    st.push(i);
    }
    return ans;
}

vector<int> prevelement(vector<int>& heights, int n )
{
    stack<int>st;
    st.push(-1);
    vector<int>ans(n);
    for(int i =0;i<n;i++)
    {
        int curr= heights[i];
        while(st.top()!=-1 && heights[st.top()]>=curr)
        {
            st.pop();
        }
    ans[i]=st.top();
    st.push(i);
    }
    return ans;
}

 int largestRectangleArea(vector<int>& heights) {
       int n =heights.size();
       int area= INT_MIN;
       vector<int>next=nextelement(heights,n); 
       vector<int>prev=prevelement(heights,n); 
       for(int i =0;i<n;i++)
       {
           int l = heights[i];
           int b = next[i]-prev[i]-1;
           int newarea= l*b;
           area=max(area,newarea);
       }
       return area;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int>histogram(matrix[0].size(),0);
        int maxi= INT_MIN;
        
        for(int i = 0;i<matrix.size();i++)
        {
            for(int j= 0 ;j<histogram.size();j++)
            {
                if (matrix[i][j]=='1')
                {
                    histogram[j]++;
                }
                else
                {
                    histogram[j]=0;
                }
            }
            maxi=max(maxi,largestRectangleArea(histogram));
        }
        return maxi;
    }
};