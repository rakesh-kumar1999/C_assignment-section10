/*Write a program using function to input a m x n matrix (of integers) and then find the
largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it.*/
#include "stdio.h"
#define max 10
void input(int R, int C, int M[][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            scanf("%d", &M[i][j]);
    }
}
void display(int R, int C, int M[][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n\n");
    }
}
int find_largest(int R, int C, int M[][C])
{
    int largest = M[0][0];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (M[i][j] > largest)
                largest = M[i][j];
        }
    }
    return largest;
}
int find_secondlargest(int R, int C, int M[][C])
{
    int largest = M[0][0], secondlargest = M[0][1];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (M[i][j] > largest)
            {
                secondlargest = largest;
                largest = M[i][j];
            }
            else if (M[i][j] > secondlargest && M[i][j] < largest)
            {
                secondlargest = M[i][j];
            }
        }
    }
    return secondlargest;
}
int find_smallest(int R, int C, int M[][C])
{
    int smallest = M[0][0];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (M[i][j] < smallest)
                smallest = M[i][j];
        }
    }
    return smallest;
}
int find_secondsmallest(int R, int C, int M[][C])
{
    int smallest = M[0][0], secondsmallest = M[0][1];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (M[i][j] < smallest)
            {
                secondsmallest = smallest;
                smallest = M[i][j];
            }
            else if (M[i][j] < secondsmallest && M[i][j] > smallest)
            {
                secondsmallest = M[i][j];
            }
        }
    }
    return secondsmallest;
}
void main()
{
    int mat[max][max], row, col;
    printf("Enter the row size and col size of matrix\n");
    scanf("%d %d", &row, &col);
    printf("Enter %d elements of %dx%d matrix\n", row * col, row, col);
    input(row, col, mat);
    printf("The Matrix:\n");
    display(row, col, mat);
    int largest = find_largest(row, col, mat);
    int second_largest = find_secondlargest(row, col, mat);
    int smallest = find_smallest(row, col, mat);
    int second_smallest = find_secondsmallest(row, col, mat);
    printf("\nlargest number of the matrix: %d", largest);
    printf("\nsecond_largest number of the matrix: %d", second_largest);
    printf("\nsmallest number of the matrix: %d", smallest);
    printf("\nsecond_smallest number of the matrix: %d", second_smallest);
}