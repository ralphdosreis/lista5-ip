#include <stdio.h>

int main() {
    int N, M;
    
    scanf("%d %d", &N, &M);
    
    if (N <= 1 || M <= 1 || N > 1000 || M > 1000) {
        return 0;
    }

    int matrix[N][M];
    int total_elements = N * M;

    int min_value = 1001, max_value = -1;
    int min_count = 0, max_count = 0;
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
            int value = matrix[i][j];
            
            if (value < min_value) {
                min_value = value;
                min_count = 1;
            } else if (value == min_value) {
                min_count++;
            }
            
            if (value > max_value) {
                max_value = value;
                max_count = 1;
            } else if (value == max_value) {
                max_count++;
            }
        }
    }

    double min_percentage = (double)min_count / total_elements * 100;
    double max_percentage = (double)max_count / total_elements * 100;

    printf("%d %.2lf%%\n", min_value, min_percentage);
    printf("%d %.2lf%%\n", max_value, max_percentage);

    return 0;
}