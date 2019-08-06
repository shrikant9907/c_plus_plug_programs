/*
* Accept N numbers and display their sum.
*/

#include<stdio.h>
int main() {    
	 
	int i=1, sum = 0, a, n;
	
	printf("Numbers Size: ");
	scanf("%d", &n);
	
	while(i<=n){
		
		printf("Enter Number: ");
		scanf("%d",&a);
		sum = sum + a;
		i++;
		
	}
	
	printf("Sum is %d", sum);
	
	return 0;
}
