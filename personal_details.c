/*
Name:Bridget kanana
Reg_No:CT101/G/26558/25
Date:12/09/2025
Description:personal_details 
*/
#include<stdio.h>
int main()
{
	float height;
	double bank balance;
	long long phone number;
	 
	printf("Enter your height:");
	scanf("%f",&height);
	
	printf("Enter your bank balance:");
	scanf("%lf",&bank balance);
	
	printf("Enter your phone number:");
	scanf("%lld",&phone number);
	
	printf("your height:%2f\n",height);
	printf("your bank balance:%2lf\n",bank balance);
	printf("your phone number:%lld\n",phone number);
	
	return 0;
}