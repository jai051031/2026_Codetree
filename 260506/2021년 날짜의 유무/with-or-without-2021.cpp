#include <iostream>
using namespace std;
string f(int m, int d){
    if(m > 12){
        return "No";
    }
    if(m == 2){
        if(d <= 28)
            return "Yes";
        return "No";
    }
    else if(m < 8){
        if(m % 2 != 0){
            if(d <= 31)
                return "Yes";
            return "No";
        }
        else{
            if(d <= 30)
                return "Yes";
            return "No";
        }
    }
    else{
        if(m % 2 == 0){
            if(d <= 31)
                return "Yes";
            return "No";
        }
        else{
            if(d <= 30)
                return "Yes";
            return "No";
        }
    }
}
int main() {
    int m, d;
    cin >> m >> d;
    cout << f(m, d);
    return 0;
}