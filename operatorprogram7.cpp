#include<stdio.h>
int main(){  
	
	int n=5, y;
		
	y = ++n + ++n + ++n + ++n + ++n + ++n; 
	
	//  n=6 + n=7
	//	n + n : 7+7
	// 14 + 8 = 22
	// 22 + 9 = 31
	// 31 + 10 = 41
	// 41 + 11 = 52
	
	return y; 
	
}
