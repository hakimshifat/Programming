 // Pascals Triangle
//  #include <stdio.h>
// int main() {
//     int rows, number = 1;;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (int i = 0; i < rows; i++) {
//         for (int space = 1; space < rows - i; space++){
//             printf("  ");
//         }
//         for (int j = 0; j <= i; j++) {
//             if (j > 0){
//                 number = number * (i - j + 1) / j;
//             }
//             printf("%4d", number);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Fibonacci Series


// #include <stdio.h>

// int main() {
//     int limit, a = 0, b = 1, c;
    
//     printf("Print Fibonacci series until: ");
//     scanf("%d", &limit);

//     printf("%d %d ", a, b);
    
//     c = a + b;
//     while (c < limit) {
//         printf("%d ", c);
//         a = b;
//         b = c;
//         c = a + b;
//     }
//     printf("\n");
    
//     return 0;
// }


// Prime Number


// #include<stdio.h>
// int main(){
//     int n, c = 0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         if(n%i == 0){
//             c++;
//         }
//     }
//     if(c <= 2){
//         printf("\n%d is Prime Number\n",n);
//     }
//     else{
//         printf("\n%d is not Prime Number\n");
//     }
    

//     return 0;
// }

//Sum of last and first digit
// #include<stdio.h>
// int main()
// {
//     int number,FirstNum,lastNum,sum = 1;
//     printf("Enter Number: ");
//     scanf("%d",&number);
//     lastNum = number % 10; 
//     while(number){
//         FirstNum = number % 10;
//         number /= 10;
//     }
//     printf("%d\n",FirstNum+lastNum);
//     return 0;
// }


//Product of digit of numbers

// #include<stdio.h>
// int main()
// {
//     int number,sum = 1;
//     printf("Enter Number: ");
//     scanf("%d",&number);
//     while(number){
//         sum = sum * (number % 10);
//         number /= 10;
//     }
//     printf("%d\n",sum);
//     return 0;
// }


//Swap first and last number and keep other intact

// #include<stdio.h>
// #include<math.h>
// int main() {

//     int number, digit = 0, swapped;
//     printf("Enter Number: ");
//     scanf("%d", &number);
   
//     int originalnumber = number;
//     int last = number % 10;
   
//     while (number != 0) {
//         number /= 10;
//         digit++;
//     }
//     number = originalnumber;

//    while(number>10) {
//         number /= 10;
//     }
//     int first = number;

//     swapped  = last;
//     swapped *= (int) round(pow(10, digit-1));
//     swapped += originalnumber % ((int)round(pow(10, digit-1)));
//     swapped -= last;
//     swapped += first;

//     printf("%d\n", swapped);

//     return 0;
// }

//1+11+111+1111 series and its sum

// #include <stdio.h>

// int main() {
//     int n, i;
//     long int temp = 0, sum = 0;
    
//     printf("Enter N: ");
//     scanf("%d", &n);
    
//     printf("The series is: ");
//     for(i = 1; i <= n; i++) {
//         temp = temp * 10 + 1;
//         printf("%ld ", temp);
//         sum += temp; 
//     }
    
//     printf("\nSUM : %ld\n", sum);
    
//     return 0;
// }


// LAB-2
//  #include<stdio.h>
//  int main()
//  {
//      char c;
//      printf("Enter alphabet: ");
//      scanf("%c",&c);
//      switch(c){
//          case 'a':{
//              printf("Vowel\n");
//              break;
//          }
//              case 'e':{
//              printf("Vowel\n");
//              break;
//          }
//                  case 'i':{
//              printf("Vowel\n");
//              break;
//          }
//                  case 'o':{
//              printf("Vowel\n");
//              break;
//          }
//                  case 'u':{
//              printf("Vowel\n");
//              break;
//          }
//          default:{
//              printf("Consonant\n");
//              break;
//          }
//      }
//      return 0;
//  }

// #include<stdio.h>
// int main()
// {
//     int a = 10;
// LOOP:
//     do{
//         if(a == 15){
//             a++;
//             goto LOOP;
//         }
//         printf("Value of a: %d\n",a);
//         a++;
//     }while(a<20);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i = 10;
//     do{
//         if(i==15){
//             i++;
//             printf("THIS LINE IS EXCICUTED ONLY ONCE;\n");
//             continue;
//         }
//         printf("The value of a: %d\n", i);
//         i++;
//     }while(i<20);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     enum tahmidergf{Maria,Marjia,Shreya,Rehnuma=9999999,Saima,Faiza,Anika,Mehar,Tuly,Tahia,Shammi};
//     enum tahmidergf a = Tahia;
//     printf("%d\n",a);

//     return 0;
// }
