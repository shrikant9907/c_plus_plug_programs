#include<stdio.h>

int main() {
	
	int fun1();
	int fun2();
	
	// Calling First Function
	fun1();
	fun1();
	fun1();
	
	printf("\n");   
	
	// Calling Second Function
	fun2();
	fun2();
	fun2();
	 	
	return 0; 	
}

// Function 1
int fun1() {
	
	int i = 0;
	i++; 
	
	printf("\t %d", i);  
	
	return 0; 
}

// Function 2
int fun2() {
	 
	static int i = 0;  
	i++;  
	
	printf("\t %d", i);  
	
	return 0;   
}
