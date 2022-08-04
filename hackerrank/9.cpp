//Variable Sized Arrays


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,arr[MAX][MAX],d,f;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        int s;
        cin>>s;
        for(int j=0;j<s;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<b;i++)
    {
       cin>>d>>f;
       cout<<arr[d][f]<<endl; 
    }  
    return 0;
}
