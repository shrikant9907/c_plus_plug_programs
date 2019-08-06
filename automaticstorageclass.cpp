#include<stdio.h>
int main(){
	// Main Function Scope
	
	int x = 5;
	
	{
	// Second Scope
		
		auto int y = 20;
		
		{
			// Third Scope
			
			int z = 100;
			
			printf("x:%d \t y:%d \t z:%d", x,y,z);
		} 
		
	//printf("x:%d \t y:%d \t z:%d", x,y,z); // Error: 'z' was not declared in this scope.
		
	}
	
	//	printf("x:%d \t y:%d \t z:%d", x,y,z);
	// Error: 'y' was not declared in this scope.
	// Error: 'z' was not declared in this scope.
	
	return 0;	
}
