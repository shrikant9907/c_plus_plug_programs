#include<stdio.h>
int main() {
	
	char h; 
	
	printf("Enter a character in UPPER CASE : ");
	scanf("%c", &h);
	h = h + 32;
	printf("The lower case character is %c",h);
	
	return 0;
}
