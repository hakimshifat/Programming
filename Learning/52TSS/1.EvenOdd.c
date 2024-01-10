#include <stdio.h>
int main()
{
    int i, j, k;
    scanf("%d", &j);
    for (i = 1; i <= j; i++)
    {
        scanf("%d", &k);
        if ((k % 2) == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}