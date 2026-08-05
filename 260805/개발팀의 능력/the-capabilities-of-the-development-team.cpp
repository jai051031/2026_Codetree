#include <iostream>
using namespace std;
int abs(int n){
    if(n < 0)
        n *= -1;
    return n;
}
int main() {
    int a[5], sum = 0, mini = 10000000, check = 0;
    for(int i=0; i<5; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i != j){
                for(int k=0; k<5; k++){
                    int x, y, z, max = 0, min = 1000000;
                    if(j != k && k != i){
                        x = a[i];
                        y = a[j] + a[k];
                        z = sum - x - y;
                        if(x == y || y == z || z == i){
                            break;
                        }
                        if(x >= y && x >= z)
                            max = x;
                        if(y >= x && y >= z)
                            max = y;
                        if(z >= y && z >= x)
                            max = z;
                        if(y < x && y < z)
                            min = y;
                        if(x < y && x < z)
                            min = x;
                        if(z < x && z < y)
                            min = z;
                        if(abs(max-min) < mini){
                            mini = abs(max-min);
                            check++;
                        }
                    }
                }
            }
        }
    }
    if(check == 0){
        cout << "-1";
        return 0;                                                                                                                                                                                               
    }
    cout << mini;
    return 0;
}