
// StringStream

#include <bits/stdc++.h>
using namespace std;


int main() {
    string str;
    cin>>str;
    stringstream ss;
    ss<<str;
    char ch;
    int a;
    while (ss>>a) {
        cout<<a<<endl;
        ss>>ch;
    }
    return 0;
}
