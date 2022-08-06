//Maps-STL

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     map <string,int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int q ;
        cin>>q;
        string x;
        if (q == 1)
        {
            int y ;
            cin>>x;
            cin>>y;
            m[x] += y;
        }
        else if (q == 2)
        {
            cin>>x;
            m.erase(x);
        }
        else
        {
            cin>>x;
            map<string,int>::iterator itr=m.find(x);
            if (itr != m.end())
            {
                cout<<m[x]<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    
    return 0;
}
