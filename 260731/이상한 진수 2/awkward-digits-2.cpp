#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string a;
    cin >> a;
    int max = 0;
    for(int i=1; i<a.length(); i++){
        int sum = 0;
        for(int j=0; j<a.length(); j++){
            if(i == j){
                if(a[j] == '0')
                    sum += pow(2, (a.length()-j-1));
            }
            else{
                if(a[j] == '1')
                    sum += pow(2, (a.length()-j-1));
            }
        }
        if(max < sum)
            max = sum;
    }
    cout << max;
    return 0;
}