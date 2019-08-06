#include<stdio.h>
int main() {
	
	float r, area, peri;
	
	printf("Enter a radius");
	scanf("%f",&r);
	
	area = 3.14*r*r;
	peri = 2*3.14*r; 
	
	printf("Area: %f", area);
	printf("Perimeter: %f", peri);
	
	return 0;
}
