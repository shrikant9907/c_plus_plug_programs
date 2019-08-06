#include<stdio.h>
int main() {
	
	float salary, da, hra, net;
	printf("Enter your salary");
	scanf("%f",&salary);
	
	da = salary*15/100;
	hra = salary*110/100;
	net = salary + da + hra;
	printf("Net Salary is %f",net); 

	
	return 0;
}
