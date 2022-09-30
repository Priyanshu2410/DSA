#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    while (r--)
    {
      int l,k=0;
      cin>>l;
      string s;
      cin>>s;
      int m=s.size();
      for (int i=0;i<m;i++)
      {
          if (s[i]=='H') k++;
          else if (s[i]=='T') k--;
          if (k==-1||k==2)
          {
              cout<<"Invalid"<<endl;
              break;
          }
      }
      if (k==0) cout<<"Valid"<<endl;
      else if (k==1) cout<<"Invalid"<<endl;
    }
}