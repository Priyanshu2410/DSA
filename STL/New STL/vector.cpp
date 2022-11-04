#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    cout<<"capacity of vector "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity of vector "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity of vector "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity of vector "<<v.capacity()<<endl;

    cout<<"size of vector"<<v.size()<<endl;

    cout<<"elemnet present at 2nd "<<v.at(2)<<endl;

    cout<<"first elemnt is "<<v.front()<<endl;

    cout<<"last element is "<<v.back()<<endl;

    for(int i:v)
    {
        cout<<i<<endl;
    }
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }
    cout<<"capacity of vector "<<v.capacity()<<endl;
    cout<<"size of vector is "<<v.size()<<endl;
    v.clear();
    cout<<"size of vector is "<<v.size()<<endl;

    vector<int>a(5,1);
    for(int i:a)
    {
        cout<<i<<endl;
    }
    vector<int>last(a);
    for(int i:last)
    {
        cout<<i<<endl;
    }
    
}