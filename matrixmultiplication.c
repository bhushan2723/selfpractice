#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2];

    // Input matrix A
    printf("Enter elements of 2x2 matrix A (row-wise):\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &A[i][j]);

    // Input matrix B
    printf("Enter elements of 2x2 matrix B (row-wise):\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &B[i][j]);

    // Perform matrix c
    C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    // Output the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
