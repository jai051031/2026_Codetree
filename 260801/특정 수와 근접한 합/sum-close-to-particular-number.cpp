#include <iostream>
using namespace std;
int abs(int n){
    if(n < 0)
        n *= -1;
    return n;
}
int main() {
    int n, m, a[100], sum = 0, min = 1000000;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(min > abs(sum-a[i]-a[j]-m))
                min = abs((sum - a[i] - a[j])-m);
        }
    }
    cout << min;
    return 0;
}