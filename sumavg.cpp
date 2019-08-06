#include<stdio.h>
int main() {
	
	int a, b, c, d, e, sum;
	float avg; 
	
	printf("Enter five numbers: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	sum = a + b + c + d + e;
	avg = sum/5;
	printf("Sum is %d", sum);
	printf("Average is %f", avg); 
	
}
