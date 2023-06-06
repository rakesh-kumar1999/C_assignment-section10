/*Write a function using pointers to add two matrices and return the resultant matrix. Use
this function within the main function to add two matrices.*/
#include <stdio.h>
#define max 5

void create_Matrix(int R, int C,int (*matrix)[C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", *(matrix + i) + j);
        }
    }
}
void show(int R, int C,int (*matrix)[C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%7d\t", (*(*(matrix + i) + j)));
        }
        printf("\n");
    }
}
void addMatrix(int R, int C,int (*mat1)[C],int (*mat2)[C],int (*res)[C])
{

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            *(*(res+ i) + j) = (*(*(mat1 + i) + j) + *(*(mat2 + i) + j));
        }
    }
}

void main()
{
    int mat1[max][max], mat2[max][max], res[max][max], row, col;

    printf("Enter the row size of the matrix: ");
    scanf("%d", &row);
    printf("Enter the column size of the matrix: ");
    scanf("%d", &col);

    printf("Enter the elements to %dX%d matrix\n\n", row, col);
    printf("Enter the element to Matrix-1\n\n");
    create_Matrix(row, col,mat1);

    printf("Enter the element to Matrix-2\n\n");
    create_Matrix(row, col,mat2);

    printf("The matrix-1 is\n");
    show(row, col,mat1);

    printf("\nThe matrix-2 is\n");
    show(row, col,mat2);

    addMatrix(row, col,mat1,mat2,res);
    
    printf("The sum of two matrix is\n");
    show(row, col,res);
}
