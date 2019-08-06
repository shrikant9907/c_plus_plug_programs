#include<stdio.h>
int main(){
	
	int A, B, *p;
	
	A = 5;
	B = 30;
	
	p = &A;
	printf("A:%d ", A); 		// Output = 5 
	printf("\t Pointer P:%d ", *p); 	// Output = 5 

	printf("\n"); 
 
	p = &B;
	printf("B:%d ", B); 		// Output = 30 
	printf("\t Pointer P:%d ", *p); 	// Output = 30 

	
	return 0;
}
