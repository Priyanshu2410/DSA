#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;

    m[1]="priyanshu";
    m[3]="patel";
    m[2]="om";
    m.insert({4,"mann"});
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"cheak 3 is present or not"<<m.count(3)<<endl;

    m.erase(3);
     for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }
}