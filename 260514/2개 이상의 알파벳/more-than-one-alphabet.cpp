#include <iostream>
using namespace std;
string f(int len, string s){
    for(int i=1; i<len; i++){
        if(s[i] != s[i-1])
            return "Yes";
    }
    return "No";
}
int main() {
    string s;
    cin >> s;
    int len = s.length();
    cout << f(len, s);
    return 0;
}