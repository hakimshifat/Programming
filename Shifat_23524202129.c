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




 













// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     int sum = 0;
//     int term = 0;
//     for (int i = 0; i < n; ++i) {
//         term = term * 10 + 1; // Generating the next term in the series
//         sum += term; // Adding the term to the sum
//     }

//     printf("The sum of the series is: %d\n", sum);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 26;
//     if (!num % 2)
//         // jump to even
//         goto even;
//     else
//         // jump to odd
//         goto odd;
// even:
//     printf("%d is even", num);
//     // return if even
//     return;
// odd:
//     printf("%d is odd", num);
//     return 0;
//}

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
//     enum tahmidergf{Maria,Marjia,Shreya = 10,Rehnuma=9999999,Saima,Faiza,Anika,Mehar,Tuly,Tahia,Shammi};
//     enum tahmidergf a = Saima;
//     printf("%d\n",a);

//     return 0;
// }
