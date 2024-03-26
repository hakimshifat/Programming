/*

You can copy the code to a online compiler or your own compiler to check output



1.a. C is a structured programming language because it
divides a large problem into smaller modules called
functions or procedures, each of which handles a
specific responsibility. A collection of such functions
constitutes the program that solves the entire problem.




1.b


Given Code:

#include<stdio>
int Main(){
	int a,b = 5, sum = 0
	scanf("Enter value %d", a);
	sum =+ 5;
	print("%d %d",a+b,sum);
}

Corrected Version with documentation:

#include<stdio.h> // .h was missing
int main(){ // M of main will always be lowercased
	
	int a,b = 5,sum = 0; // ';' semicolon was missing
	
	printf("Enter value"); // this was posed into scanf but to show this output we need to use printf
	
	scanf("%d",&a); // scanf only contain format specifier. And address pointer '&' was missing
	
	sum = +5; // this function is correct. Basically assigning positive 5 into sum 
	
	printf("%d %d",a+b,sum); // f was missing from printf

  	return 0; // return call was missing
}







1.c





x = b == 5 ? 13 : 15

The following expression means 

x = (b == 5 ? 13 : 15)

Use of Ternary operator can be seen here. If the value of b is 5
13 will be assigned to x. If not 15 will be assigned to x.








2.a. Register and auto storage haven't been taught to us.








2.b (there were some errors with mams code. which is corrected on my code)


#include<stdio.h>
int foo = 1; //declaring a global variable

void foo_function(); // initializing the function 
int main()
{
	printf("%d\n",++foo); // pre increment. foo = 2  // output: 2

	               // calling the function. The programme now will look for the function and start executing it.

	foo_function(); output: 2 , foo2 = 1 , foo = 3
	foo_function(); output: 1 , foo2 = 0 , foo = 4
	printf("%d\n",--foo);  output: 3
	return 0;
}
void foo_function(){
	foo++;           // increases the global variable by 1. so foo = 3 . For another use. foo = 4
	
	static int foo2 = 2; // declaring foo2 = 2. static means the variable will not reset to its default vale after each use.
	
	printf("%d\n",foo2--); // post decrement. it will print 2 then decrement it to 1.
}

So total output: 2
				 2
				 1
				 3







2.c





#include<stdio.h>
int main(){
	int n, sum = 0;
	scanf("%d",&n);

	for(int i=1;i <= n;i++){
		sum += (i*i*i);
	}
	printf("%d",sum);
}




3.a

#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	switch(x){
		case 0:printf("I");break;
		case 3:printf("love");
		case 4:printf("BUP");break;
		case 6:printf("So");
		case 7:printf("Much");break;
		case 10:printf("!");
		default:printf("Wrong");
	}
	return 0;
}

Input: 0 1 3 10
output: I Wrong love BUP!




3.b


#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0 ; i < n ;i++){
		for(int j = 0;j<i;j++){
			printf(" ");
		}
		for(int l = 0;l < n ; l++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}




3.c

Break and continue is generally used in loops and switches.

break is used to exit a loop.

#include<stdio.h>
int main(){
	for(int i =0;i<5;i++){
		printf("%d\n",i);
	}
	return 0;
}

this code will print 0 1 2 3 4 . If i want to stop
the loop after printing 3. I need to use break.

#include<stdio.h>
int main(){
	for(int i =0;i<5;i++){
		printf("%d\n",i);
		if(i == 3){
			break;
		}
	}
	return 0;
}

Output: 0 1 2 3



Continue:

we can skip a iteration of a loop or switch using continue
statement.

#include<stdio.h>
int main(){
	for(int i =0;i<5;i++){
		printf("%d\n",i);
	}
	return 0;
}

Output: 0 1 2 3 4

if we want to skip printing 3 here.

#include<stdio.h>
int main(){
	for(int i =0;i<5;i++){
		if(i == 3){
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}

output: 0 1 2 4





4.a. Amader jototuku mone pore multiplication koray nai. so skip it

#include<stdio.h>
int main()
{
	int arr1[4][3];
	int arr2[3][5];
	int arr3[4][5] = {0}; //initializing all value to 0

	for(int i = 0; i <4;i++){
		for(int j = 0;j<3;j++){
			scanf("%d",&arr1[i][j]);
		}
	}

	for(int i = 0; i <3;i++){
		for(int j = 0;j<5;j++){
			scanf("%d",&arr2[i][j]);
		}
	}

	for(int i = 0; i <4;i++){
		for(int j = 0;j<5;j++){

		for(int m = 0;m < 3 ; m++){
			arr3[i][j] += arr1[i][m] * arr2[m][j];
		}
		}
	}

	for(int i = 0; i <4;i++){
		printf("\n");
		for(int j = 0;j<5;j++){
			printf("%d\t",arr3[i][j]);
		}
	}

	return 0;
}






4.b


#include<stdio.h>
#include<string.h>
int main()
{
	char string1[100];
	char string2[100];

	scanf("%s",&string1);
	scanf("%s",&string2);

	printf("Size of the First string %d\n",strlen(string1));
	printf("Size of the Second string %d\n",strlen(string2));


	if(strcmp(string1, string2) == 0){
		printf("\nTwo string are equal");
	}
	else{
		printf("\nTwo strings are not equal");
	}
	return 0;
}


4.c


#include<stdio.h>
int main()
{
	int unsized[] = {1,2,3,45};
	return 0;
}


5.a.c  Function poray nai

5.b

#include<stdio.h>
int main()
{
	int num1 = 1;
	int num2 = 2;

	printf("Before Swap\nNum1 = %d\nNum2 = %d",num1,num2);

	int temp;
	temp = num2;
	num2 = num1;
	num1 = temp;

	printf("\n\nAfter Swap\nNum1 = %d\nNum2 = %d\n",num1,num2);

	printf("Printing Address\nNum1 = %p\nNum2 = %p\n",&num1,&num2);
	return 0;
}








Adding two matrix while taking row and colum as user input:



#include<stdio.h>
int main()
{
	int r , c;
	printf("Enter Row and Colum: ");
	scanf("%d %d",&r, &c);

	int arr1[r][c];
	int arr2[r][c];
	int arr3[r][c];

	printf("Enter First Matrix\n");
	for(int i = 1; i<=r ; i++){
		for(int j = 1; j<=c ;j++){
			printf("Array1[%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}

for(int i = 1; i<=r ; i++){
		for(int j = 1; j<=c ;j++){
			printf("Array1[%d][%d]",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}

for(int i = 1; i<=r ; i++){
		for(int j = 1; j<=c ;j++){
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	printf("Resulting Matrix\n");

	for(int i = 1; i<=r ; i++){
		printf("\n");
		for(int j = 1; j<=c ;j++){
			printf("%d\t",arr3[i][j]);
		}
	}
	
	return 0;
}



ArmStrong Number taking input from user:

#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    int count = 0, digit = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

	while(temp){
		temp /= 10;
		count++;
	}

	temp = num;
    
	while (temp) {
        digit = temp % 10;
        sum += pow(digit, count);
		temp /= 10;
    }

    if (sum == num) {
        printf("Armstrong!");
    } else {
        printf("Beda weak!");
    }

    return 0;
}

*/
