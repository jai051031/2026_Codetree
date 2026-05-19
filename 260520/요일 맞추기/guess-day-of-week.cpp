#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e = 1, x, y;
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> a >> b >> c >> d;
    string week[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    if(a == c){
        if(b < d){
            e += (d-b)%7;
            if(e == 7)
                e = 0;
        }
        else{
            e -= (b-d)%7;
            if(e < 0)
                e += 7;
            if(e == 7)
                e = 0;
        }
    }
    else if(a < c){
        int sum = 0;
        for(int i=a+1; i<c; i++){
            sum += day[i-1];
        }
        e += (d+(day[a-1]-b)+sum)%7;
        if(e == 7)
            e = 0;
    }
    else{
        int sum = 0;
        for(int i=c+1; i<a; i++){
            sum += day[i-1];
        }
        e -= (b+(day[c-1]-d)+sum)%7;
        if(e < 0)
            e += 7;
        if(e == 7)
            e = 0;
    }
    cout << week[e];
    return 0;
}