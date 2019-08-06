#include<stdio.h>
int main() {
	
	float sale, basic, hra, da, con, inc, bonus, total;

	printf("Enter sale amount :");
	scanf("%f", &sale);
	
	basic = 3000;
	hra = basic * 20 / 100;
	da = basic * 110 / 100;
	con = 500;
	
	if(sale>100000)
	{
		inc = sale * 10 / 100;
		bonus = 500;
	} else {
		inc = sale * 5 / 100;
		bonus = 200;
	}
	
	total = basic+hra+da+con+inc+bonus;
	

	printf("\n Basic Salary %f: ", basic); 
	printf("\n House Rent %f: ", hra); 
	printf("\n Dareness All %f: ", da); 
	printf("\n Conveyance %f: ", con); 
	printf("\n Incentive %f: ", inc); 
	printf("\n Bonus %f: ", bonus); 
	printf("\n Total Salary %f: ", total); 
	
	return 0;
}
