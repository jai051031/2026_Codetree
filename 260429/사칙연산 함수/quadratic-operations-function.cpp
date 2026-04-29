#include <iostream>
using namespace std;
int plu(int a, int b){
    return a+b;
}
int min(int a, int b){
    return a-b;
}
int divi(int a, int b){
    return a/b;
}
int mul(int a, int b){
    return a*b;
}
int main() {
    int a, b;
    char c;
    cin >> a >> c >> b;
    if(c == '+'){
        cout << a << " + " << b << " = " << plu(a, b);
    }
    else if(c == '-'){
        cout << a << " - " << b << " = " << min(a, b);
    }
    else if(c == '/'){
        cout << a << " / " << b << " = " << divi(a, b);
    }
    else if(c == '*'){
        cout << a << " * " << b << " = " << mul(a, b);
    }
    else
        cout << "False";
    return 0;
}