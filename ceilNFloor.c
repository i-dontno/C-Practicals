#include <stdio.h>
#include <math.h>
int main() {
 double number;

 // Input: Get a number from the user
 printf("Enter a number: ");
 scanf("%lf", &number);
 // Calculate the ceiling value using ceil function
 double ceilResult = ceil(number);
 // Calculate the floor value using floor function
 double floorResult = floor(number);
 // Display the results
 printf("Ceiling of %.2lf is %.2lf\n", number, ceilResult);
 printf("Floor of %.2lf is %.2lf\n", number, floorResult);
 return 0;
}
