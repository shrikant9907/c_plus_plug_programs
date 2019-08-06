#include<stdio.h>
int main() {
	
	float p, r, intr;
	int y;
	
	
	printf("Enter Principle");
	scanf("%f",&p);
	
	printf("\n Enter Rate of Interest");
	scanf("%f",&r);

	printf("\n Enter Number of Month"); 
	scanf("%d",&y);  
	
	intr = (p*r*y)/100;  

	printf("Interest is: %f", intr); 
	
	return 0;
}
