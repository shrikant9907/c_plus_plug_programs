#include<stdio.h>
int main(){
	
	int A, *p;
	
	A = 5;
	p = &A;
	
	printf("A:%d ", A); // Output = 5 
	printf("\t &A:%d ", &A); // Output = 2686648
	
	printf("\t P:%d ",p); // Output = 2686648
	printf("\t Pointer P:%d ",*p); // Output = 5 	
	
	return 0;
}
