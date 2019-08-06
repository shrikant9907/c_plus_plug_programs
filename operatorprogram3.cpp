#include<stdio.h>
int main(){  
	
	int a,b,c,d,e;
	
	a = 9;
	b = 15;
	c = 16;
	d = 12;   
	
	e = (a!=b)?(c<=(!d))?a:b:c;
	
	printf("e=%d\n",e);  
	
	return 0;
	
}
