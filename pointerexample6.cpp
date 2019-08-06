/*
* If array declared as pointer variable then it contains the address of first element.
* Pointer with Array - Find Output and explain each statements
*/

#include<stdio.h>
int main() {
	
	int a[5] = {20,30,40,50,60};
	int i;
	
	for(i=0; i<=5; i++) {
		printf("\t %d",a[i]);
		printf("\t %d",*(a+i)); 
	} 
	
	return 0;
}

