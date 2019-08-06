#include<stdio.h>

int main(){
	
int A, *B, **C, ***D;

// ***D
// **C
// *B
// &A

A = 5;
B = &A; 
C = &B;
D = &C;

// Address of : &

printf("%d \t", A);
printf("%d \n", &A);
printf("%d \t", *B); 
printf("%d \n", B);
printf("%d \t", **C); 
printf("%d \n", C);
printf("%d \t", ***D); 
printf("%d \n", D);

return 0; 

}


