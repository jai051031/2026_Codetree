#include <iostream>
using namespace std;

int main() {
    int n, arr[100], a, b, c, cnt = 0;
    cin >> n;
    cin >> a >> b >> c;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){
                if((i <= a+2 && i >= a-2) || (j <= b+2 && j >= b-2) || k <= c+2 && k >= c-2){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}