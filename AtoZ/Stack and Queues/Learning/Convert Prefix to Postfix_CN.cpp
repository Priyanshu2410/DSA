void traverse(string s, string &res, int &i){

    char c = s.at(i);
    i++;
    if(c >= 'A' && c <= 'Z'){

        res += c;

        return;

    }
    traverse(s, res, i);
    traverse(s, res, i);
    res += c;
}
string preToPost(string s) {

    string res;

    int i = 0;

    traverse(s, res, i);

    return res;

}