#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 500

int A[N][N];
int B[N][N];
int C[N][N];

void initMatrices() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
            C[i][j] = 0;
        }
    }
}

int main() {
    srand(0);

    initMatrices();

    printf("Naive matrix multiplication\n");

    clock_t start = clock();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    clock_t end = clock();

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("C[0][0] = %d\n", C[0][0]);
    printf("Time: %f seconds\n", time_spent);

    return 0;
}