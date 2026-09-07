#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++){
        int min = 1000000, mini = 0;
        for(int j=i; j<n; j++){
            if(a[j] < min){
                min = a[j];
                mini = j;
            }
        }
        int t = a[i];
        a[i] = a[mini];
        a[mini] = t;
    }
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}