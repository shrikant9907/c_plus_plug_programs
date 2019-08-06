 #include<stdio.h>
 int main(){
 	
 	int eltsiz = 4; 
 	
 	int a[eltsiz];
 	
 	int i;
 	
 	// Input
 	
 	for(i=0;i<eltsiz;i++){
 	
	 	printf("\n Enter a no: ");
	 	scanf("%d",&a[i]);
	 	
	}
	
	// Output
 	
 	for(i=0;i<eltsiz;i++)
 	printf("\n The value is: %d", a[i]); 
 	
 	return 0;
 }
