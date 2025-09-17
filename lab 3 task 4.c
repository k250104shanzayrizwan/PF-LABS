#include <stdio.h>

int main(){
	float basicsalary,HRA,DA,GROSSPAY;
	
	printf("enter the basic salary here: \n");
	scanf("%f",&basicsalary);
	
	HRA=0.10*basicsalary; //house rent allowance;
	printf("the HRA value is %.2f\n",HRA);
	DA= 0.05*basicsalary; // dearness allowance;
	printf("the DA value is %.2f\n",DA);
	
	GROSSPAY=basicsalary+HRA+DA;
	printf("the grosspay is %.2f\n",GROSSPAY);
	return 0;
}


