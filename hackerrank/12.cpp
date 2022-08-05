// Structs


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student
{
    int firstnum;
    string firstname;
    string lastname;
    int secnum;
};

int main()
{
    student st;
    cin>>st.firstnum>>st.firstname>>st.lastname>>st.secnum;
    cout<<st.firstnum<<" "<<st.firstname<<" "<<st.lastname<<" "<<st.secnum;
    return 0;
}
