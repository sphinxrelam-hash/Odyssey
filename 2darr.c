#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    // Input for Matrix A
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for Matrix B
    printf("\nEnter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    int B[p][q];

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check multiplication rule
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Number of columns of A must equal number of rows of B.\n");
        return 0;
    }

    // Resultant Matrix C (m x q)
    int C[m][q];

    // Initialize and multiply
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Print Product Matrix C
    printf("\nProduct Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
