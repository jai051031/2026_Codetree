#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a.length() != b.length())
        cout << "No";
    else{
        for(int i=0; i<a.length(); i++){
            if(a[i] != b[i]){
                cout << "No";
                return 0;
            }
        }
        cout << "Yes";
    }
    return 0;
}