#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a[1000];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    cout << a[m-1];
    return 0;
}