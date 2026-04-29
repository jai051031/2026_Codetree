#include <iostream>
using namespace std;
void print(int n, int m){
    int max;
    for(int i=1; i<=n; i++){
        if(n % i == 0 && m % i == 0)
            max = i;
    }
    cout << max;
}
int main() {
    int n, m;
    cin >> n >> m;
    if(n > m){
        int t = m;
        m = n;
        n = t;
    }
    print(n, m);
    return 0;
}