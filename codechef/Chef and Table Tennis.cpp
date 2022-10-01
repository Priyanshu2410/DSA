#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        int dcount=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
            else
            {
                dcount++;
            }
        }
        if(count>dcount)
        {
            cout<<"WIN"<<endl;
        }
        
        else
        {
            cout<<"LOSE"<<endl;
        }
    }
	// your code goes here
	return 0;
}
