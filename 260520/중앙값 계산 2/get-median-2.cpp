#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a[100], b[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if((i+1) % 2 != 0){
            for(int j=0; j<=i; j++){
                b[j] = a[j];
            }
            sort(b, b+i+1);
            cout << b[i/2] << " ";
        }
    }

    return 0;
}