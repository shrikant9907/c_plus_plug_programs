/*
* If array declared as pointer variable then it contains the address of first element.
* Pointer with Array - Find Output and explain each statements
*/

#include<stdio.h>
int main() {
	
	int a[5] = {25,35,45,55,65};
	int *i;
	
	for(i=a; i<=a+4; i++) {
		printf("%d", *i);
	} 
	
	return 0;
}

