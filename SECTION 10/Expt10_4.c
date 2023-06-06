/*Write a program using function to input a m x n matrix (of integers) and then transpose it.*/
#include "stdio.h"
#define max 5
void input(int R, int C, int M[][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            scanf("%d", &M[i][j]);
    }
}
void display(int R,int C,int M[][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n\n");
    }
}

void transpose(int R, int C, int M[][C])
{
    for (int i = 0; i < C; i++)
    {
        for (int j = 0; j < R; j++)
        {
            printf("%-5d", M[j][i]);
        }
        printf("\n\n");
    }
}
void main()
{
    int mat[max][max], row, col;
    printf("Enter the row size and col size of matrix\n");
    scanf("%d %d", &row, &col);
    printf("Enter %d elements of %dx%d matrix\n",row*col, row, col);
    input(row, col, mat);
    printf("The Matrix:\n");
    display(row,col,mat);
    printf("The transpose of Entered matrix is:\n");
    transpose(row, col, mat);
}
