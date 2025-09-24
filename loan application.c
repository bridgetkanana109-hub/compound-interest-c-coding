/*
Name:Bridget Kanana
Reg no:CT101/G/26558/25
Description:loan application 
*/
int main()
{
    int age;
	double income;
	
	printf("Enter the age:");
	scanf("%d",&age);
	
	printf("Enter the income:");
	scanf("%lf",&income);
	
	if(age>= 21 &income>=21000)
	{printf("congratulation, you qualify for a loan.\n");} else
	{printf("unfortunately,we are unable to offer you a loan at this time.\n);}
	
	return 0;
	}