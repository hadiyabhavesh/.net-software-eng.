#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int playlist1 = 20;
    int playlist2 = 35;

    printf("Before swapping:\n");
    printf("Playlist 1 = %d\n", playlist1);
    printf("Playlist 2 = %d\n", playlist2);

    swap(&playlist1, &playlist2);

    printf("\nAfter swapping:\n");
    printf("Playlist 1 = %d\n", playlist1);
    printf("Playlist 2 = %d\n", playlist2);

    return 0;
}
