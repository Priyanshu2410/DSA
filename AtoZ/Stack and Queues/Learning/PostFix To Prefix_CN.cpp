#include <bits/stdc++.h> 

bool isOperator(char ch){
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

string postfixToPrefix(string &exp)
{
    stack<string> s;

    for(int i = 0; i < exp.size(); i++){
        if(isOperator(exp[i])){
            string b = s.top();
            s.pop();

            string a = s.top();
            s.pop();

            s.push(exp[i]+a+b);
        }
        else{
            string tmp(1,exp[i]);
            s.push(tmp);
        }
    }

    return s.top();
}