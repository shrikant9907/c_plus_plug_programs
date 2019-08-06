
/*
* Program for swap two numbers
*/
#include<stdio.h>
int main(){
	
	int X, Y, Z;
	
	printf("Enter 2 Numbers: ");
	scanf("%d%d", &X, &Y);
	
	Z=X;
	X=Y;
	Y=Z;
	
	printf("%d%d", X, Y); 
	
	return 0;
}
