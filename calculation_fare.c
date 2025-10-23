/* Write a C function named calculateFare() that takes the distance traveled (in kilometers) 
as input and returns the total fare. 
Assume the fare rate is KSh. 50 per kilometer. 
Example: If the distance is 10 km, the function should return 500. */

#include <stdio.h>
//function prototype
int calculateFare(int distance);

//main function
int main() {
    int distance;
    int fare;
    printf("Enter the distance travelled in km: ");
    scanf("%d", &distance);
    fare = calculateFare(distance);
    printf("Your total fare is: %d\n", fare);
    
}

//function declaration
int calculateFare(int distance) {
    int fare;
    fare = 50 * distance;
    return fare;
}