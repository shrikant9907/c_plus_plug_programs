/*
* Pointer with String - Find Output and explain each statements
*/
#include<stdio.h>
int main() {
	
	char a[100];
	int mystrlen(char *);
	int r; 

	printf("Enter a string: ");
	gets(a);
	r = mystrlen(a);
	
	printf("The lenght is %d:",r); 
	return 0;
}

int mystrlen(char * s) {
	int i;
	for(i=0; *s!=NULL; i++, s++);
	return i;
}

