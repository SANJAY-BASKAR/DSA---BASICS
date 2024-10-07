#include <stdio.h>

int main() {
    int A[2][3] = { {1, 2, 3}, {4, 5, 6} }; // 2x3 matrix
    int B[3][2] = { {7, 8}, {9, 10}, {11, 12} }; // 3x2 matrix
    int C[2][2] = {0}; // 2x2 result matrix, initialized to 0

    // Matrix multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result
    printf("Result matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
