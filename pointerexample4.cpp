/*
* Calculate Count of digits, sum of digits and reverse of digits of a no using pointers.
*/

#include<stdio.h>
int main() {
	
	int a, b, c, d;
	
	int calculate(int, int *, int *, int *);
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	calculate(a, &b, &c, &d);
	printf("\n Count of digits B: %d", b);
	printf("\n Sum of digits B: %d", c);
	printf("\n Reverse of digits B: %d", d);
	
	
	return 0;
}

int calculate(int p, int *q, int *r, int *s) {
	
	int c1= 0, c2= 0, c3= 0;
	
		for( ;p>0; p=p/10) {
			c1++;
			c2 = c2 + p%10;
			c3 = c3*10 + p%10;
		}
		
	*q = c1;
	*r = c2;
	*s = c3;
	
	return 0;
}
