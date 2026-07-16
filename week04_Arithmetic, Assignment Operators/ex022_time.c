#include <stdio.h>

int main() {

    int hours, minutes, seconds;
    int Input_seconds;


    printf("Input :");
    scanf("%d", &Input_seconds);

    hours = Input_seconds / 3600; // Calculate hours
    minutes = (Input_seconds % 3600) / 60; // Calculate minutes
    seconds = Input_seconds % 60; // Calculate remaining seconds

    printf("Output : %d : %02d : %02d \n", hours, minutes, seconds); 

}