#include <stdio.h>

void inputMatrix(int a[2][2]);
void addMatrix(int a[2][2], int b[2][2], int c[2][2]);
void displayMatrix(int c[2][2]);

int main()
{
    int a[2][2], b[2][2], c[2][2];

    printf("Enter elements of First Matrix:\n");
    inputMatrix(a);

    printf("Enter elements of Second Matrix:\n");
    inputMatrix(b);

    addMatrix(a, b, c);

    printf("\nAddition of Matrix:\n");
    displayMatrix(c);

    return 0;
}

void inputMatrix(int a[2][2])
{
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void addMatrix(int a[2][2], int b[2][2], int c[2][2])
{
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void displayMatrix(int c[2][2])
{
    int i, j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
