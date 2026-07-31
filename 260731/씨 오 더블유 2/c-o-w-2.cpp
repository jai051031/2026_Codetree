#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i] == 'C'){
            for(int j=i+1; j<n; j++){
                if(s[j] == 'O'){
                    for(int k=j+1; k<n; k++){
                        if(s[k] == 'W'){
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}