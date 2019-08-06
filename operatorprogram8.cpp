#include<stdio.h>
int main(){  
	
	int n=5, y;
		
	y = ++n - ++n + ++n - --n + ++n + --n; 
	
	//  n=6 - n=7
	//	n - n : 7-7
	// 0 + 8 = 8
	// 8 - 7 = 1
	// 1 + 8 = 9
	// 9 + 7 = 16  
	
	return y; 
	
}
