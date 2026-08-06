#include <iostream>
using namespace std;
int a[100][2];
int abs(int n){
    if(n < 0)
        n *= -1;
    return n;
}
int t(int x, int y, int z, int *max){
    if(a[x][1] == a[y][1]){
        if(a[x][0] == a[z][0]){
            int S = abs(a[x][0] - a[y][0]) * abs(a[x][1] - a[z][1]);
            if(*max < S)
                *max = S;
            return 1;
        }
        else if(a[y][0] == a[z][0]){
            int S = abs(a[x][0] - a[y][0]) * abs(a[y][1] - a[z][1]);
            if(*max < S)
                *max = S;
            return 1;
        }
        else
            return 0;
    }
    else if(a[y][1] == a[z][1]){
        if(a[y][0] == a[x][0]){
            int S = abs(a[y][0] - a[z][0]) * abs(a[y][1] - a[x][1]);
            if(*max < S)
                *max = S;
            return 1;
        }
        else if(a[z][0] == a[x][0]){
            int S = abs(a[z][0] - a[y][0]) * abs(a[x][1] - a[z][1]);
            if(*max < S)
                *max = S;
            return 1;
        }
        else
            return 0;
    }
    else if(a[z][1] == a[x][1]){
        if(a[z][0] == a[y][0]){
            int S = abs(a[x][0] - a[z][0]) * abs(a[y][1] - a[z][1]);
            if(*max < S)
                *max = S;
            return 1;
        }
        else if(a[x][0] == a[y][0]){
            int S = abs(a[x][0] - a[z][0]) * abs(a[x][1] - a[y][1]);
            if(*max < S)
                *max = S;
            return 1;
        }
        else
            return 0;
    }
    else
        return 0;
}
int main() {
    int n, max = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i != j && j != k && k != i){
                    t(i, j, k, &max);
                }
            }
        }
    }
    cout << max;
    return 0;
}