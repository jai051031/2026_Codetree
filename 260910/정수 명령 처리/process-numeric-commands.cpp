#include <iostream>
using namespace std;

int main() {
    int n, a[10000], top = -1;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s[0] == 'p'){
            if(s[1] == 'u'){
                int k;
                cin >> k;
                a[++top] = k;
            }
            else{
                cout << a[top--] << endl;
            }
        }
        else if(s[0] == 's'){
            cout << top+1 << endl;
        }
        else if(s[0] == 'e'){
            if(top == -1)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else{
            cout << a[top] << endl;
        }
    }
    return 0;
}