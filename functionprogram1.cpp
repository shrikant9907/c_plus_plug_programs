#include<stdio.h>

int main(){
	
	int a, b, c;
	float v;
	float averageofnum(int,int,int); // Declaration
	
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	v = averageofnum(a,b,c); // Function Calling
	
	printf("The average is %f:", v);
	
	return 0;
}


// Function Definition
float averageofnum(int x, int y, int z) {

	float r;
	r = x + y + z; 
	r = r/3;
	
	return r;
}
