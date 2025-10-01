//Q79 Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    for(int d = 0; d < rows + cols - 1; d++) {
        int row = (d < cols) ? 0 : d - cols + 1; 
        int col = (d < cols) ? d : cols - 1;

        while(row < rows && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
        printf("\n");
    }

    return 0;
}
