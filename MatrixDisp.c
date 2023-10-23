#include <stdio.h>

int main(){

 int i, j;

 int matrix[3][3];

 printf("Enter the elements of 3 X 3 matrix\n");

 /* Input data in matrix */

 for (i = 0; i < 3; i++) {

 for (j = 0; j < 3; j++){

 printf("Enter data in [%d][%d]: ", i, j);

 scanf("%d", &matrix[i][j]);

 }

 }

 /* Display the matrix */

 for (i = 0; i < 3; i++){

 for (j = 0; j < 3; j++){

 printf("%d\t", matrix[i][j]);

 }

 printf("\n");
}

 return 0;

}
