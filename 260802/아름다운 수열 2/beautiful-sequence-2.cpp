#include <iostream>
using namespace std;

int main() {
    int n, m, a[100], b[100], cnt = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];
    for(int i=0; i<n; i++){
        int check = 0, c[100] = {0};
        for(int i=0; i<m; i++){
            c[b[i]]++;
        }
        for(int j=i; j<i+m; j++){
            if(c[a[j]] > 0)
                check++;
                c[a[j]]--;
        }
        if(check == m){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}