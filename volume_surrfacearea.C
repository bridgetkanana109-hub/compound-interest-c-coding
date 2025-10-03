/*
Name       :Bridget Kanana
Reg No     :CT101/G/26558/25
Date       :24/09/25
Description:Computing volume and surfaceArea
*/

#include<stdio.h>

int main()
{ 
    float r, h,volume,surfaceArea
	
	const Pi=3.142;
	//prompt the user to input radius and height
	printf("Enter the radius of the cylinder \n");
	scanf("%f", &r);
	printf("Enter the height of the cylinder \n");
	scanf("%f",&h);
	
	//calculate the volume and surfaceArea
	Volume = Pi * r* r* h;
	surfaceArea =( 2 Pi * r * r) + (2 * Pi * r * h);
    
	// display the results
	printf("volume of the cylinder : %,2f\n",volume);
	printf("surface Area of the cylinder : %, 2f\n",surface Area);
	
	return 0;
	}
	 
	

	











