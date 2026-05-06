#include <iostream>
using namespace std;
int f1(int y){
    if(y % 400 == 0)
        return 1;
    if(y % 100 == 0)
        return 0;
    if(y % 4 == 0)
        return 1;
    return 0;
}
string f(int y, int m, int d){
    int Y = f1(y);
    if(m == 2){
        if(d > 28+Y){
            return "-1";
        }
    }
    else if(m < 8){
        if(m % 2 == 0){
            if(d > 30){
                return "-1";
            }
        }
    }
    else{
        if(m % 2 != 0){
            if(d > 30){
                return "-1";
            }
        }
    }
    if(m == 3 || m == 4 || m == 5)
        return "Spring";
    if(m == 6 || m == 7 || m == 8)
        return "Summer";
    if(m == 9 || m == 10 || m == 11)
        return "Fall";
    if(m == 12 || m == 1 || m == 2)
        return "Winter";
}
int main() {
    int y, m, d;
    cin >> y >> m >> d;
    cout << f(y, m, d);
    return 0;
}