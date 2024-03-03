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
