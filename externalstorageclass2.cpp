#include<stdio.h>
int main(){
	
	extern int n; 
	
	int test();
	
	printf("\n %d",n);
	test();
	printf("\n %d",n);
	
	return 0; 
}
 
int test() {
	
	extern int n; 
	
	printf("\n %d",n);
	n = 25; 
	
	return 0; 
	
}

int n; 
