#include <iostream>
using namespace std;

int main() {
    int a[19][19], check = 0;
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            if(a[i][j] != 0){
                check = 1;
                for(int k=0; k<5; k++){
                    if(a[i][j+k] != a[i][j]){
                        check = 0;
                        k = 5;
                    }
                }
                if(check == 1){
                    cout << a[i][j] << "\n" << i+1 << " " << j+3;
                    return 0;
                }
                check = 1;
                for(int k=0; k<5; k++){
                    if(a[i+k][j] != a[i][j]){
                        check = 0;
                        k = 5;
                    }
                }
                if(check == 1){
                    cout << a[i][j] << "\n" << i+3 << " " << j+1;
                    return 0;
                }
                check = 1;
                for(int k=0; k<5; k++){
                    if(a[i+k][j+k] != a[i][j]){
                        check = 0;
                        k = 5;
                    }
                }
                if(check == 1){
                    cout << a[i][j] << "\n" << i+3 << " " << j+3;
                    return 0;
                }
                check = 1;
                for(int k=0; k<5; k++){
                    if(a[i-k][j+k] != a[i][j]){
                        check = 0;
                        k = 5;
                    }
                }
                if(check == 1){
                    cout << a[i][j] << "\n" << i-1 << " " << j+3;
                    return 0;
                }
            }
            check = 0;
        }
    }
    cout << '0';
    return 0;
}