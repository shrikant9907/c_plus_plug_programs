#include<stdio.h>
int n;
int main(){
	
	int test();
	// First
	printf("\n %d",n);
	
	
	test();
	
	// Third
	printf("\n %d",n);
	
}

int test() {
	
	// Second
	printf("\n %d",n);
	n = 25; 
	
}
