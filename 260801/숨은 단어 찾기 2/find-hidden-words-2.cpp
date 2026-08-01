#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    string s[50];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j] == 'L'){
                if(j < m-2){
                    if(s[i][j+1] == 'E' && s[i][j+2] == 'E')
                        cnt++;
                }
                if(j > 1){
                    if(s[i][j-1] == 'E' && s[i][j-2] == 'E')
                        cnt++;
                }
                if(i < n-2){
                    if(s[i+1][j] == 'E' && s[i+2][j] == 'E')
                        cnt++;
                }
                if(i > 1){
                    if(s[i-1][j] == 'E' && s[i-2][j] == 'E')
                        cnt++;
                }

                if(j < m-2 && i > 1){
                    if(s[i-1][j+1] == 'E' && s[i-2][j+2] == 'E')
                        cnt++;
                }
                if(j < m-2 && i < n-2){
                    if(s[i+1][j+1] == 'E' && s[i+2][j+2] == 'E')
                        cnt++;
                }
                if(j > 1 && i > 1){
                    if(s[i-1][j-1] == 'E' && s[i-2][j-2] == 'E')
                        cnt++;
                }
                if(j > 1 && i < n-2){
                    if(s[i+1][j-1] == 'E' && s[i+2][j-2] == 'E')
                        cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}