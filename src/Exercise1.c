/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result;
	//Your codes here
{float TotalKm;
    float Cost = 0;
    printf("\n Input: ");
    scanf("%f", &TotalKm);
    if(TotalKm <= 2)
    {
        Cost = TotalKm * 15000;
    }
    else if(TotalKm <= 30  && TotalKm > 2 );
    {
        Cost = (TotalKm - 2)*2000/0.25 + 215000;
    }
    if(TotalKm > 30);
    {
        Cost = 1*15000 + (30-2)/0.25*2000 + (TotalKm - 30)*5000;
    }
    printf(" Output: %f ", Cost);
}
    printf("%d", result);
    return 0;
}
