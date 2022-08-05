// Classes and Objects

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class demo
{
    int arr[5],n;
    int sum=0;
    public:
        // demo(int a)
        // {
        //     int arr1[a];
        // }
        void input()
        {
            
            for(int i=0;i<5;i++)
            {
                cin>>arr[i];
                sum+=arr[i];
                
            }
        }  
        int totalmarks()
        {
            return sum;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    demo *aa = new demo[n];
    for(int i=0;i<n;i++)
    {
        aa[i].input();
    }
    int pri = aa[0].totalmarks();
     int count=0;
    for(int i=0;i<n;i++)
    {
        int total=aa[i].totalmarks();

        if(total>pri)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
    
}
