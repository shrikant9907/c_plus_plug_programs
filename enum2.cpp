#include<stdio.h>
 
enum color { red, green=10, blue };

// 0, 5, 6
 
int main()
{ 
    enum color A;
    
	A = red;	
	printf("%d", A); // 0
	
	A = blue;
	printf("%d", A); // 6
	
	A = green;
	printf("%d", A); // 5
    
    return 0;
} 
 

