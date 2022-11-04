#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>max;

    priority_queue<int ,vector<int>,greater<int>> min;

    max.push(3);
    max.push(5);
    max.push(8);
    max.push(4);

    int n=max.size();
    for(int i=0;i<n;i++)
    {
        cout<<max.top()<<endl;
        max.pop();
    }

    min.push(5);
    min.push(4);
    min.push(8);
    min.push(2);
cout<<"min  "<<endl;
    int m=min.size();
    for(int i=0;i<m;i++)
    {
        cout<<min.top()<<endl;
        min.pop();
    }
}