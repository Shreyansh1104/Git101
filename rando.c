#include <stdio.h>

int main()
{
    int x, i, j;
    char c = '*';
    printf("Enter side of square:");
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    printf("%c", c);
    printf("\n");
    for (i = 0; i < x - 2; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (j == 0 || j == x - 1)
            printf("%c", c);
            else
            printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i < x; i++)
    printf("%c", c);
    return 0;
}
