#include<stdio.h>
int main(){  
	
	int a,b,c;
	a = 9;
	b = 3;
	c = !(a<b || b<a);
	
	printf("%d",c);
	
	return 0;  
	
}
