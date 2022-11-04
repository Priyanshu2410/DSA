#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    //binary search

    cout<<"finding for 5 "<<binary_search(v.begin(),v.end(),5)<<endl;
}