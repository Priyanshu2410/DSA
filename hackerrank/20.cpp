//Inheritance Introduction

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class a
{
  public:
    void priyanshu()
    {
        cout<<"I am a triangle"<<endl;
    }  
};

class b:public a
{
    public:
        void mann()
        {
            cout<<"I am an isosceles triangle"<<endl;
        }
        void om()
        {
            cout<<"In an isosceles triangle two sides are equal"<<endl;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    b aa;
    aa.mann();
    aa.om();
    aa.priyanshu(); 
    return 0;
}
