#include <stdio.h>

int main() {

 int n, a = 0, b = 1, c, i = 2;

 // Get the number of terms from the user

 printf("Enter the number of Fibonacci terms to print: ");
scanf("%d", &n);

 // Checking if the input is valid

 if (n <= 0) {

 printf("Please enter a positive integer.\n");

 }

 else if (n == 1) {

 printf("Fibonacci series up to 1 term:\n");

 printf("%d\n", a);

 }

 else {

 printf("Fibonacci series up to %d terms:\n", n);

 printf("%d, %d, ", a, b);

 do {

 c = a + b;

 printf("%d, ", c);

 a = b;

 b = c;

 i++;

 } while (i < n);

 printf("\n");

 }

 return 0;

}
