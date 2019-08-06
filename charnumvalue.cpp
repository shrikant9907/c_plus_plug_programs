#include<stdio.h>
int main() {
	
	char h; 
	
	printf("Enter a character in UPPER CASE : ");
	scanf("%c", &h);
	
	printf("\n The Upper Case character is %d ",h);
	
	h = h + 32;
	printf("\n The lower case character is %d ",h);
	
	return 0;
}
