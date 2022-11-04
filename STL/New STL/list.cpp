#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;

    l.push_back(3);
    l.push_front(5);
    l.push_front(7);
    l.push_front(9);
    l.push_front(10);

    for(int i:l)
    {
        cout<<i<<endl;
    }
}