#include <iostream>
using namespace std;

int main() {
    int n, a[10], b[10], c[10];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    int x, y, z, result = 0;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int k=1; k<=9; k++){
                if(i != j && j != k && k != i){
                    int cnt = 0;
                    for(int l=0; l<n; l++){
                        int cnt1 = 0, cnt2 = 0, x, y, z;
                        x = a[l] / 100;
                        y = (a[l] / 10) % 10;
                        z = a[l] % 10;
                        if(i == x)
                            cnt1++;
                        if(j == y)
                            cnt1++;
                        if(k == z)
                            cnt1++;
                        if(i == y || i == z)
                            cnt2++;
                        if(j == x || j == z)
                            cnt2++;
                        if(k == x || k == y)
                            cnt2++;
                        if(cnt1 == b[l] && cnt2 == c[l])
                            cnt++;
                    }
                    if(cnt == n){
                        result++;
                    }
                }
            }
        }
    }
    cout << result;
    return 0;
}