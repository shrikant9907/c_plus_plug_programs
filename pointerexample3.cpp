/*
* Swapping of two variable using pointers.
*/ 

#include<stdio.h>
int main(){
	
	int a, b;

	int swap(int *, int *);
	
	a = 5;
	b = 45; 
	
	printf("\n Before Swap a:%d b:%d",a,b); 		
	swap(&a, &b); 
	printf("\n After swap a:%d b:%d", a, b); 
	
	return 0;
}

int swap(int *x, int *y) { 
	int z; 
	
	z = *x; // z = 5
	*x = *y; // *x = 45
	*y = z; // *y = 5  
	
	return 0; 
	
}


