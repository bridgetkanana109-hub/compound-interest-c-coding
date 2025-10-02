/*
Name:Bridget kanana 
Reg_No:CT101/G/26558/25
Description:Exam Eligibility
*/
#include<stdio.h>
int main(){
  float attedance;
  float average_marks;
  
  //input the attedance, average_marks
  
  printf("Enter the attedance:");
  scanf("%f", &attedance);
  
  printf("Enter the Average_marks:");
  scanf("%f", &average_marks);
   
  // analyse exam eligibility
  if (attedance>=75 && average_marks>=40)
  
  {printf("you are eligible for final exam.\n");} else
  {printf("you are not eligible for final exam.\n");}
  
  return 0;
  }
  
  
  
  
	