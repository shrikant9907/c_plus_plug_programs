#include<stdio.h>
int main(){  
	
	int n=4, y;

	y = ++n + ++n + n-- - n++ + n--;
	//  6     6     6     5     6     // 5
    
	// 6 + 6 => 12
	// 12 + 6 => 18
	// 18 - 5 => 13
	// 13 + 6 => 19 
			
	return y; 
	
}
