#include <iostream>
using namespace std;
void swap(int *n, int *m){
    int x = *n;
    *n = *m;
    *m = x;
}
int main() {
    int n, m;
    cin >> n >> m;
    swap(&n, &m);
    cout << n << " " << m;    
    return 0;
}