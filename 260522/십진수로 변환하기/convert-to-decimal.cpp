#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0, cnt = 0;
    for(int i=s.length()-1; i>=0; i--){
        sum += (s[i]-'0') * pow(2, cnt);
        cnt++;
    }
    cout << sum;
    return 0;
}