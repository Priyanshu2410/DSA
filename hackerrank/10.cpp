// Strings

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string str1,str2,str3;
    char a,b;
    int strlen1,strlen2;
    cin>>str1;
    cin>>str2;
    strlen1=str1.size();
    strlen2=str2.size();
    cout<<strlen1<<" "<<strlen2<<endl;
    str3=str1+str2;
    cout<<str3<<endl;
    a=str2[0];
    b=str1[0];
    // b=str2[0];
    // a=str1[0];
    str2[0]=b;
    str1[0]=a;
    cout<<str1<<" "<<str2<<endl;
    
    
  
    return 0;
}