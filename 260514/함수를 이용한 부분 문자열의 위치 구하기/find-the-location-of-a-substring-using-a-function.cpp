#include <iostream>
using namespace std;
int f(string s, string a){
    for(int i=0; i<s.length(); i++){
        bool check = false;
        if(s[i] == a[0]){
            for(int j=1; j<a.length(); j++){
                if(s[i+j] != a[j])
                    check = true;
            }
            if(check == false)
                return i;
        }
    }
    return -1;
}
int main() {
    string s;
    cin >> s;
    string a;
    cin >> a;
    cout << f(s, a);
    return 0;
}