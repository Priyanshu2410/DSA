string prefixToInfixConversion(string &s){

// Write your code here.

reverse(s.begin(),s.end());

stack <string> st;

string res;

for(int i=0;i<s.length();i++)

{

if((s[i]>='a'&& s[i]<='z') || (s[i]>='0'&&s[i]<='9'))

{

st.push(string(1,s[i]));

}

else{

string a=st.top();

st.pop();

string b=st.top();

st.pop();

res='('+a+string(1,s[i])+b+')';

st.push(res);

}

}

return res;

}

 