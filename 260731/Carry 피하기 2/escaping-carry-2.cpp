#include <iostream>
#include <cmath>
using namespace std;
int carry(int a, int b){
    int c;
    if(a > b){
        if(b > 999)
            c = 4;
        else if(b > 99)
            c = 3;
        else if(b > 9)
            c = 2;
        else
            c = 1;
    }
    else{
        if(a > 999)
            c = 4;
        else if(a > 99)
            c = 3;
        else if(a > 9)
            c = 2;
        else
            c = 1;
    }
    for(int i=0; i<c; i++){
        if(a % static_cast<int>(pow(10,i+1)) + b % static_cast<int>(pow(10,i+1)) >= static_cast<int>(pow(10,i+1)))
            return 0;
    }
    return 1;
}
int main() {
    int n, a[20], max = -1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(carry(a[i], a[j]) == 1){
                for(int k=j+1; k<n; k++){
                    if(carry(a[i] + a[j], a[k]) == 1){
                        if(a[i] + a[j] + a[k] > max)
                            max = a[i] + a[j] + a[k];
                    }
                }
            }
        }
    }
    cout << max;
    return 0;
}