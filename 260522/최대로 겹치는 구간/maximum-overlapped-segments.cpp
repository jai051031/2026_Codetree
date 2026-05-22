#include <iostream>
using namespace std;

int main() {
    int n, a[201] = {0};
    cin >> n;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        x += 100;
        y += 100;
        for(int j=x; j<y; j++){
            a[j]++;
        }
    }
    int max = 0;
    for(int i=0; i<202; i++){
        if(max < a[i])
            max = a[i];
    }
    cout << max;
    return 0;
}