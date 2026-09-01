#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        int b;
        cin >> s;
        if(s == "push_back"){
            cin >> b;
            a.push_back(b);
        }
        else if(s == "pop_back"){
            a.pop_back();
        }
        else if(s == "size"){
            cout << a.size() << endl;
        }
        else if(s == "get"){
            cin >> b;
            cout << a[b-1] << endl;
        }
    }
    return 0;
}