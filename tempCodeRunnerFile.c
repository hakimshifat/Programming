#include<stdio.h>
#include<math.h>
int main() {

    int number, digit = 0, swapped;
    printf("Enter Number: ");
    scanf("%d", &number);
   
    int originalnumber = number;
    int last = number % 10;
   
    while (number != 0) {
        number /= 10;
        digit++;
    }
    number = originalnumber;

   while(number>10) {
        number /= 10;
    }
    int first = number;

    swapped  = last;
    swapped *= (int) round(pow(10, digit-1));
    swapped += originalnumber % ((int)round(pow(10, digit-1)));
    swapped -= last;
    swapped += first;

    printf("%d\n", swapped);

    return 0;
}