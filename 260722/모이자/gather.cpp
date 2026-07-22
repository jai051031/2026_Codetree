#include <iostream>
using namespace std;

int main() {
    int n, a[100], result = 0, min = 1000000;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j - i >= 0)
                result += a[j]*(j-i);
            else
                result += a[j]*(i-j);
        }
        if(min > result)
            min = result;
        result = 0;
    }
    cout << min;
    return 0;
}