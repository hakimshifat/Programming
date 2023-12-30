#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1;; i++)
    {
        a = 3 * a * i;
        b = 2 * b * i;
        if (a > b)
        {
            printf("%d", i);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}