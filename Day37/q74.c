#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d%c", matrix[j][i], (j == rows - 1) ? '\n' : ' ');
        }
    }

    return 0;
}
