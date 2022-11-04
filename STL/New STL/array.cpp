#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a = {1,2,3,4};

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"2ns element"<<a.at(2)<<endl;

    cout<<"array is emapty or not "<<a.empty()<<endl;

    cout<<"first element "<<a.front()<<endl;

    cout<<"last element "<<a.back()<<endl;
}