#include <stdio.h>

void AddMat(int *mat1, int *mat2, int *sumMat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(sumMat + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sumMat[3][3];

    int rows = 3;
    int cols = 3;

    AddMat(mat1, mat2, sumMat, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sumMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
