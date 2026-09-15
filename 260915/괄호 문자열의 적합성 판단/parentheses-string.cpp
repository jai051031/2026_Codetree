#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int stack[50], top = -1;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            stack[++top] = '(';
        }
        else{
            if(stack[top] == '('){
                top--;
            }
            else
                stack[++top] = ')';
        }
    }
    if(top == -1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}