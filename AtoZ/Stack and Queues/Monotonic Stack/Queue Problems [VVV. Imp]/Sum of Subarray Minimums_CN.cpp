int sumSubarrayMins(vector<int>&arr) {
    // Write your code here.
    int n = arr.size();
     vector<int>ns(n);
    vector<int>ps(n);
    for(int i=0;i<n;i++){
        ns[i] = n-i-1;
        ps[i] = i;
    }

    stack<int>s1,s2;

    for(int i=0;i<n;i++){
        while(!s1.empty() && arr[s1.top()]>arr[i]){
            ns[s1.top()] = i-s1.top()-1; 
            s1.pop();
        }
        s1.push(i);
    }

    for(int i=n-1;i>=0;i--){
        while(!s2.empty() && arr[s2.top()]>=arr[i]){
            ps[s2.top()] = s2.top()-i-1; 
            s2.pop();
        }
        s2.push(i);
    }
    int ans = 0;
    #define mod 1000000007
    for(int i=0;i<n;i++){
        ans+= (arr[i]*((ns[i]+1)*(ps[i]+1)))%mod;
    }
    return ans;
}