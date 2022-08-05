//Vector-Erase

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int a,b,c;
    cin>>a;
    cin>>b>>c;
    v.erase(v.begin()+a-1);
    v.erase(v.begin()+b-1,v.begin()+c-1);
    cout<<v.size()<<endl;
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout<<endl;
     
    return 0;
}
