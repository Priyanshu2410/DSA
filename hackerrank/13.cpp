// Class

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
class demo
{
  int firstnum;
  string firstname;
  string lastname;
  int secnum;
  int a,b;
  public:
    void input()
    {
        cin>>firstnum;
        cin>>firstname;
        cin>>lastname;
        cin>>secnum;
    }
    void output()
    {
        cout<<firstnum<<endl<<lastname<<", "<<firstname<<endl<<secnum<<endl;
        cout<<endl;
        cout<<firstnum<<","<<firstname<<","<<lastname<<","<<secnum;
        
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    demo aa;
    aa.input();
    aa.output();
    return 0;
}
