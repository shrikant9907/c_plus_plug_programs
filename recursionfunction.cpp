 #include<stdio.h>
 int main(){
 	
 	int B, P, R;
 	int power(int, int);
 	
 	printf("Enter Base and Power numebrs: ");
	scanf("%d%d", &B, &P); 
	
	R = power(B,P);
	
	printf("%d", R);
	  	
 	return 0;
 }
 
 int power(int x, int y) {
 	if(y==0)
 		return 1;
 	else
 		return x*power(x,y-1);
 		
 		// 3 * power(3, 2)
 		// 3 * 3 * power(3,1)
 		// 3 * 3 * 3 * power(3,0)
 		// 3 * 3 * 3 * 1
 		// 27 
 }
