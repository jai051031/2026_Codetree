#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, check = 0;
    string a, s[100];
    cin >> n >> m >> a;
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    sort(s, s+n);
    for(int i=0; i<n; i++){
        check = 0;
        for(int j=0; j<a.length(); j++){
            if(a[j] != s[i][j])
                check = 1;
        }
        if(check == 0){
            m--;
            if(m == 0){
                cout << s[i];
                check = 0;
            }
        }
    }
    return 0;
}