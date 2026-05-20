#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    string s[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    sort(s, s+n);
    for(int i=0; i<n; i++){
        cout << s[i] << endl;
    }
    return 0;
}