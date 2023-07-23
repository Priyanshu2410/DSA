#include <bits/stdc++.h>
int prec(char c) {
  if (c == '^')
    return 3;
  else if (c == '*' || c == '/')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}
string infixToPostfix(string exp) {
  // Write your code here
  stack<char> st;
  string res;
  for (int i = 0; i < exp.length(); i++) {

     if (exp[i] == '(')
      st.push(exp[i]);

    else if ((exp[i] >= '0' && exp[i] <= '9') || 
       ((exp[i] >='a' && exp[i] <='z') || exp[i]>='A' && exp[i]<='Z'))
      res += exp[i];

    

    else if (exp[i] == ')') {
// !st.empty() && 
      while (st.top() != '('){
        res+=st.top();
        st.pop();
      }
      // if(!st.empty())
        st.pop();
    }

    else if(exp[i]=='+' || exp[i] =='-' || exp[i] =='*' || exp[i] =='/'
            || exp[i]=='^'){
      while(!st.empty() && st.top()!='(' && prec(st.top()) >= prec(exp[i])){
        res+=st.top();
        st.pop();
      }
      st.push(exp[i]);
    }
  }
  while(!st.empty())
  {
    res+=st.top();
    st.pop();
  }
  return res;
}