#include <stdio.h>

#define MAX 10


void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}


void subtractMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}


void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rowsA, int colsA, int rowsB, int colsB) {
    
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


void transposeMatrix(int A[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = A[i][j];
        }
    }
}


void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int rowsA, colsA, rowsB, colsB;

    
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    if (rowsA == rowsB && colsA == colsB) {
        addMatrices(A, B, result, rowsA, colsA);
        printf("\nMatrix A + Matrix B:\n");
        printMatrix(result, rowsA, colsA);
    } else {
        printf("\nMatrix addition is not possible (different dimensions).\n");
    }

    
    if (rowsA == rowsB && colsA == colsB) {
        subtractMatrices(A, B, result, rowsA, colsA);
        printf("\nMatrix A - Matrix B:\n");
        printMatrix(result, rowsA, colsA);
    } else {
        printf("\nMatrix subtraction is not possible (different dimensions).\n");
    }

    
    if (colsA == rowsB) {
        multiplyMatrices(A, B, result, rowsA, colsA, rowsB, colsB);
        printf("\nMatrix A * Matrix B:\n");
        printMatrix(result, rowsA, colsB);
    } else {
        printf("\nMatrix multiplication is not possible (incompatible dimensions).\n");
    }

    
    transposeMatrix(A, result, rowsA, colsA);
    printf("\nTranspose of Matrix A:\n");
    printMatrix(result, colsA, rowsA);

    return 0;
}
