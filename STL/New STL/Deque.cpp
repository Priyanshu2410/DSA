#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(5);
    d.push_front(7);
    d.push_front(9);
    d.push_front(11);
    for (int i : d)
    {
        cout << i << endl;
    }
    d.pop_back();
    d.pop_front();
    cout<<"after"<<endl;
    for (int i : d)
    {
        cout << i << endl;
    }

    cout<<"first element"<<d.front()<<endl;
    cout<<"last element"<<d.back()<<endl;

    d.erase(d.begin(),d.begin()+1);
    for (int i : d)
    {
        cout << i << endl;
    }
}