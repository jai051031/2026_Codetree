#include <iostream>
using namespace std;

int main() {
    int Queue[100000], front = -1, rear = -1;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s[0] == 'p' && s[1] == 'u'){
            int a;
            cin >> a;
            Queue[++rear] = a;
        }
        if(s[0] == 'p' && s[1] == 'o'){
            cout << Queue[++front] << "\n";
        }
        if(s[0] == 's'){
            cout << rear - front << "\n";
        }
        if(s[0] == 'e'){
            if(rear == front)
                cout << "1\n";
            else
                cout << "0\n";
        }
        if(s[0] == 'f'){
            cout << Queue[front + 1] << "\n";
        }
    }
    return 0;
}