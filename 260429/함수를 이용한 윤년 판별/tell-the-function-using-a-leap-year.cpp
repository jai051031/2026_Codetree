#include <iostream>
using namespace std;
string Y(int y){
    if(y % 400 == 0)
        return "true";
    if(y % 100 != 0 && y % 4 == 0)
        return "true";
    return "false";
}
int main() {
    int year;
    cin >> year;
    cout << Y(year);
    return 0;
}