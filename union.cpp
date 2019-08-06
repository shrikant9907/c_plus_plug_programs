#include<stdio.h>

union test {

	int a;
	float b;
	double c;

};

int main(){

	union test Z;
	
	Z.a = 120;
	printf("%d \n", Z.a);  		// 120

	Z.b = 4.5; 
	printf("%f \n",  Z.b);			// 4.500000
	printf("%f \n", Z.c);			//undeterminate
	
	return 0;

}

