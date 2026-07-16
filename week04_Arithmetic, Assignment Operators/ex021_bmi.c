#include <stdio.h>

int main(){

    int weight, height;
    float bmi;

    printf("Enter your weight (kg):");
    scanf("%d", &weight);

    printf("Enter your height (cm):");
    scanf("%d", &height);

    float heightM = height / 100.0; // Convert height from cm to meters
    bmi = weight / (heightM * heightM); // Calculate BMI using the formula

    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5) {

        printf("You are underweight.\n");

    } else if (bmi >= 18.5 && bmi < 24.9) {

        printf("You have a normal weight.\n");

    } else if (bmi >= 25 && bmi < 29.9) {

        printf("You are overweight.\n");

    } else {

        printf("You are obese.\n");
    }

}