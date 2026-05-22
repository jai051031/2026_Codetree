#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0, cnt = 0, a[100];
    for(int i=s.length()-1; i>=0; i--){
        sum += (s[i]-'0') * pow(2, cnt);
        cnt++;
    }
    sum *= 17;
    int i = 0;
    while(sum > 1){
        a[i] = sum % 2;
        i++;
        sum /= 2;
    }
    a[i] = sum;
    for(int j=i; j>=0; j--){
        cout << a[j];
    }
    return 0;
}