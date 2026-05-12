#include <iostream>
using namespace std;
string f(int l, string &s){
    if(l == 1)
        return "Yes";
    for(int i=0; i<l/2; i++){
        if(s[i] != s[l-i-1])
            return "No";
    }
    return "Yes";
}
int main() {
    string s;
    cin >> s;
    int l = s.length();
    cout << f(l, s);
    return 0;
}