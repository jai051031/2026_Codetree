#include <stdio.h>
#include <stdlib.h>

// 원형 자물쇠에서 두 수 a와 b 사이의 최단 거리를 구하는 함수
int get_distance(int a, int b, int N) {
    int diff = abs(a - b);
    int circular_diff = N - diff;
    return (diff < circular_diff) ? diff : circular_diff;
}

// 특정 조합(target)과 비교하여 모든 자리가 거리 2 이내인지 확인하는 함수
int satisfies_condition(int i, int j, int k, int target[3], int N) {
    return (get_distance(i, target[0], N) <= 2 &&
            get_distance(j, target[1], N) <= 2 &&
            get_distance(k, target[2], N) <= 2);
}

int main() {
    int N;
    int comb1[3], comb2[3];

    // 입력 받기 (N, 첫 번째 조합 3개, 두 번째 조합 3개)
    // 예: 9 1 2 3 4 5 6
    if (scanf("%d", &N) != 1) return 0;
    for (int i = 0; i < 3; i++) scanf("%d", &comb1[i]);
    for (int i = 0; i < 3; i++) scanf("%d", &comb2[i]);

    int count1 = 0; // 첫 번째 조합 기준을 만족하는 가짓수
    int count2 = 0; // 두 번째 조합 기준을 만족하는 가짓수
    int both = 0;   // 두 조합의 조건을 모두 만족하는 가짓수 (교집합)

    // 1부터 N까지의 모든 3자리 조합(i, j, k)을 완전탐색
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                int is_cond1 = satisfies_condition(i, j, k, comb1, N);
                int is_cond2 = satisfies_condition(i, j, k, comb2, N);

                if (is_cond1) count1++;
                if (is_cond2) count2++;
                if (is_cond1 && is_cond2) both++;
            }
        }
    }

    // 포배제의 원리 적용: 합집합 = (조건1 만족) + (조건2 만족) - (둘 다 만족)
    int total_ans = count1 + count2 - both;

    printf("%d\n", total_ans);

    return 0;
}