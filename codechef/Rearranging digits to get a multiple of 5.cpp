#include <iostream>
using namespace std;

int main() {
       string str;
       int t;
       cin>>t;
       while(t--)
       {
           int n,flag=0;
           cin>>n;
           cin>>str;
           for(int j=0;j<n;j++)
           {
               if(str[j]=='0' || str[j]=='5')
               {
                   flag=1;
                   break;
               }
              
           }
          
           if(flag==0)
           {
            cout<<"No"<<endl;
           }
           else
           {
               cout<<"yes"<<endl;
           }
           
       }

	return 0;
}
