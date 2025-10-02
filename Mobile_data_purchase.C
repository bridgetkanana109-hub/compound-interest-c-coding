/*
Name: Bridget kanana
Reg_No:CT101/26558/25
Description:MOBILE DATA PURCHASE
*/
#include<stdio.h>
int main(){

// display the menu 

printf("1. 100MB @ 50KES\n");
printf("2. 500MB @ 200KES\n");
printf("3. 1GB   @ 350KES\n");
printf("4. 2GB   @ 600KES\n");

//input the choice
int choice;

printf("Enter your choice(1-4):");
scanf("%d",&choice);

//display the bundles using switch
switch(choice) {
case 1:
       printf("You selected 100MB @ 50KES\n");break;
case 2:
       printf("You selected 500MB @ 200KES\n");break;
case 3:
       printf("You selected 1GB   @ 350KES\n");break;
case 4:
       printf("You selected 2GB   @  600KES\n");break;
default:printf("invalid choice\n");}

return 0;
}