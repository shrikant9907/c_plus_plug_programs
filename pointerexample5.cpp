/*
* Calculate Area and Perimeter of circle
*/

#include<stdio.h>
int main() {
	
	float Radius, Area, Perimeter, *A, *P;
	
	A = &Area; // Address of Area
	P = &Perimeter; // Address of Perimeter
	
	printf("Enter Radius:");
	scanf("%f", &Radius);
	
	*A = 3.14 * Radius * Radius;
	*P = 2 * 3.14 * Radius; 
	
	printf("\n Area: %f", Area);
	printf("\n Perimeter: %f", Perimeter);
	
	return 0;
}

