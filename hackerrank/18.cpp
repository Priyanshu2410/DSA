#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<int> v;
    // int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int b;
    cin>>b;
    while(b--)
    {
        int n;
        cin>>n;
        int pri= lower_bound(v.begin(), v.end(), n)-v.begin();
        if(v[pri]==n)
        {
            cout<<"Yes ";
        }
        else {
            cout<<"No ";
        }
        cout<<pri+1<<endl;
    }
    return 0;
}
