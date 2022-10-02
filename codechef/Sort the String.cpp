#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string st;
	    cin >> st;
	    int d = 0;
	    for(int i = 1; i < n; i++)
	     {
	       if(st[i] != '1'  && st[i - 1] == '1')
	              d++;
	     }
	     cout << d << "\n";
	}
	return 0;
}
