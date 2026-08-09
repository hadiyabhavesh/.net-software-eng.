#include <stdio.h>

char* formatPrice(int price)
{
    static char result[20];
    int i = 0, j = 0;
    int digits[10];
    int count = 0;
    while (price > 0)
    {
        digits[count] = price % 10;
        price = price / 10;
        count++;
}
    for (i = count - 1; i >= 0; i--)
    {
        result[j++] = digits[i] + '0';

        if (i == 3)
            result[j++] = ',';
        else if (i == 0)
            break;
        else if (i == 2 && count > 3)
            result[j++] = ',';
    }

    result[j] = '\0';

    return result;
}

int main()
{
    int laptop = 55999;
    int mouse = 1599;
    int keyboard = 2499;

    printf("Laptop: %s\n", formatPrice(laptop));
    printf("Mouse: %s\n", formatPrice(mouse));
    printf("Keyboard: %s\n", formatPrice(keyboard));

    return 0;
}
