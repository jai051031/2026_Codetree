#include <iostream>
using namespace std;
int n, m, a[100], sum = 0;
void f(){
    while(m > 1){
        sum += a[m-1];
        if(m % 2 != 0)
            m--;
        else
            m /= 2;
    }
}
int main() {
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    f();
    cout << sum + a[0];
    return 0;
}