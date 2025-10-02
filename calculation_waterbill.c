/*
Name : Bridget kanana
Reg_No: CT101/G/26558/25
Description: calculations_Totalwaterbill
*/
#include<stdio.h>
int main(){
// input water units
   int units;
   float bills;

    printf("Enter the water units consumed:");
	scanf("%d", &units);
	
	//calculation of total bills
	
	if(units<=30) {bills=units * 20;}else
	 if(units>=31 && units<=60) {bills=units * 25;}else
	 if(units>60) { bills=units * 30;}
	 
	 // display the total bills
	 printf("total water bills: %.2fKES \n",bills);
	 return 0;
	 }