 #include<stdio.h>
int main() {   
 
    int num1, num2;  
    float fraction;     

	// Taking integer as input.
    printf("Enter First Number:");
    scanf("%d", &num1);
    
    // New line
    printf("\n\n"); 

	// Taking integer as input.
    printf("Enter Second Number:");
    scanf("%d", &num2);    
    
    // New line
    printf("\n\n");
    
    printf("The two numbers entered are %d and %d.", num1, num2);
    
    // New line
    printf("\n\n");

    // Taking float or fraction as input from the user
    printf("Enter a Decimal number: ");
    scanf("%f", &fraction); 
    
    // New line
    printf("\n\n");
	    
    printf("The float or fraction you entered is %f.", fraction);
    
    // New line
    printf("\n\n");

    return 0;
    
}
