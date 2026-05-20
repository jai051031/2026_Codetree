#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    string a[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string s;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> s;
    int sum = 0;
    if(m1 == m2){
        sum = d2 - d1;
    }
    else{
        for(int i=m1+1; i<m2; i++){
            sum += day[i-1];
        }
        sum += day[m1-1]-d1;
        sum += d2;
    }
    
    int k;
    for(int i=0; i<7; i++){
        if(s == a[i])
            k = i;
    }
    sum -= k;
    if(sum < 0){
        cout << "0";
        return 0;
    }
    cout << sum / 7 + 1;
    return 0;
}