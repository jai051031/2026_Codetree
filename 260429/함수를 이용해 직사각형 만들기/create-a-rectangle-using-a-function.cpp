#include <iostream>
using namespace std;
void Rec(int x, int y){
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout << "1";
        }
        cout << "\n";
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    Rec(n, m);
    return 0;
}