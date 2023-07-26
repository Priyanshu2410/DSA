void traverse(string s, string &res, int &i){
    char c = s.at(i);
    i--;
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        res += c;
        return;
    }
    res += ')';
    traverse(s, res, i);
    res += c;
    traverse(s, res, i);
    res += '(';
}
string postToInfix(string postfix) {

    string res = "";

    int i = postfix.length()-1;

    traverse(postfix, res, i);

    reverse(res.begin(), res.end());

    return res;

}

