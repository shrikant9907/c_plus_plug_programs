/*
* Print Prime Numbers
*/ 
#include <stdio.h>
int main() { 

   int i,p = 1, n;
    
  	for(n = 2; n <= 10; n++) { 
  	
//		printf("\n %d Mod %d : %d", n, i, n%i);  // Checking Remainers 
 	
// 	   for(i = 2; i <= n; i++) {  // Tech1
 	   for(i = 2; i < n; i++) {  // Tech2  
	   	
//	 		if(((n%i) == 0) && (n!=i)) {     // Tech1    
			if(((n%i) == 0) ) {    			// Tech2     
				p = 0; // Not Prime
				break;
			} else {     
				p = 1;  // Prime
			}    
		
	   }    
	      
	   if(p==1)    
	   printf("%d \t", n);    
   
	}
	
   return 0;
}
