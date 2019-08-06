#include<stdio.h>
int main() {
	
	int x, y, z; 

	printf("Enter 3 numbers :");
	scanf("%d %d %d", &x, &y, &z);
	
	if(x>y) {
		if(x>z)
			printf("Large is %d", x);
		else 
			printf("Large is %d", z);
	} else { 
		if(y>z)
			printf("Large is %d", y);
		else 
			printf("Large is %d", z);
	}
 
	
	return 0;
}
