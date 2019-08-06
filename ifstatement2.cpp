#include<stdio.h>
int main() {
	
	int age;
	
	printf("Enter Age: ");
	scanf("%d",&age);
	
	if(age>=18)
	printf("You can Vote"); 
	else 
	printf("You can not Vote"); 
	
	return 0;
}
