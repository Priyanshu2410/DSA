bool areIsomorphic(string &str1, string &str2)
{
     int n=str1.size();
    int m=str2.size();
    if(n!=m) return false;
    int t1[256]={0};
    int t2[256]={0};
    for(int i=0;i<n;i++){
        if(t1[str1[i]]==0 && t2[str2[i]]==0)
        {
            t1[str1[i]]=str2[i];
            t2[str2[i]]=str1[i];
        }
        else if(t1[str1[i]]!=str2[i] ||t2[str2[i]]!=str1[i]) return false;
    }
    return true;
}