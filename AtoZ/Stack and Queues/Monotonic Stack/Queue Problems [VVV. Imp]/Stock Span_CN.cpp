vector<int> findStockSpans(vector<int>& prices) {
     int n=prices.size();
    vector<int> ans(n,1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty()&&prices[st.top()]<prices[i]){
            st.pop();
        }
        if(!st.empty())ans[i]+=i-st.top()-1;
        else ans[i]+=i;
        st.push(i);
    }
    return ans;

}
