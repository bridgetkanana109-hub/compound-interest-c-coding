/*
Create a C function named convertToCelsius() that takes temperature in Fahrenheit as 
input and returns the temperature in Celsius. 
Use the formula: 
�
� =(𝐹−32)×5/9
*/
#include <stdio.h>
//function prototype
float convertToCelsius(float fahrenheit);
//main function
int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0;
}
//function declaration
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}