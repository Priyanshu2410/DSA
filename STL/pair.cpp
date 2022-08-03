#include<iostream>
using namespace std;
int main()
{
    // pair<int , int > p={1,3};
    // // how to print 1 and 3 or acces
    // cout<<p.first<<" "<<p.second;

    // // how to make pair in pair
    // pair<int ,pair<int , int >> p ={1,{3,4}};

    // // how to acces 1,3,4
    // cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
    pair<int,int> arr[] ={{1,2},{2,5},{5,1}};
    // print any number
    cout<<arr[0].second;
}