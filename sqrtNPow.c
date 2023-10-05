#include <stdio.h>
#include <math.h>
int main() {
 double number, exponent, result_sqrt, result_pow;
 // Input: Get a number from the user
 printf("Enter a number: ");
 scanf("%lf", &number);
 // Calculate the square root using sqrt function
 result_sqrt = sqrt(number);
 // Input: Get an exponent from the user
 printf("Enter an exponent: ");
 scanf("%lf", &exponent);
 // Calculate the result of raising the number to the power of exponent using pow
function
 result_pow = pow(number, exponent);
 // Display the results
 printf("Square root of %.2lf is %.2lf\n", number, result_sqrt);
 printf("%.2lf raised to the power %.2lf is %.2lf\n", number, exponent, result_pow);
 return 0;
}
