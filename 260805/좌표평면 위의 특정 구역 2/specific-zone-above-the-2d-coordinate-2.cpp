#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int a[100][2];
    for(int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }

    long long min_S = -1; // 최솟값을 안전하게 초기화하기 위한 플래그

    // i번째 점을 제외하고 남은 점들로 만들 수 있는 바운딩 박스 계산
    for(int i = 0; i < n; i++) {
        int xmax = -1;
        int ymax = -1;
        int xmin = 2e9;
        int ymin = 2e9;

        for(int j = 0; j < n; j++) {
            if(i == j) continue; // 제외할 점은 건너뜀

            if(xmax < a[j][0]) xmax = a[j][0];
            if(ymax < a[j][1]) ymax = a[j][1];
            if(xmin > a[j][0]) xmin = a[j][0];
            if(ymin > a[j][1]) ymin = a[j][1];
        }

        long long S = (long long)(xmax - xmin) * (ymax - ymin);

        // 첫 값이거나, 기존 최솟값보다 작으면 갱신
        if(min_S == -1 || min_S > S) {
            min_S = S;
        }
    }

    cout << min_S << "\n";

    return 0;
}