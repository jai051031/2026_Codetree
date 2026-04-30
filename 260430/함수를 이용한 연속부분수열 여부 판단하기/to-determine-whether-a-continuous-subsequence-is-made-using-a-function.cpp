#include <iostream>
using namespace std;
string f(int n1, int n2, int a[], int b[]){
    for(int i=0; i<n1; i++){
        if(a[i] == b[0]){
            int cnt = 0;
            for(int j=0; j<n2; j++){
                if(a[i+j] == b[j])
                    cnt++;
            }
            if(cnt == n2){
                return "Yes";
            }
        }
    }
    return "No";
}
int main() {
    int n1, n2, a[100], b[100];
    cin >> n1 >> n2;
    for(int i=0; i<n1; i++){
        cin >> a[i];
    }
    for(int i=0; i<n2; i++){
        cin >> b[i];
    }
    cout << f(n1, n2, a, b);
    return 0;
}