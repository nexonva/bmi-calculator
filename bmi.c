#include <stdio.h>

int main() {
    float cm, kg, bmi;  // Declare variables for height (cm), weight (kg), and BMI

    while (1) {  // Infinite loop to continuously get input
        printf("Input your cm: ");
        scanf("%f", &cm);  // Read height in cm
        printf("Input your kg: ");
        scanf("%f", &kg);  // Read weight in kg

        // Check for invalid input (height and weight should be positive)
        if (cm <= 0 || kg <= 0) {
            printf("Invalid input. Please enter positive values.\n");
            continue;  // Restart the loop if input is invalid
        }

        // Calculate BMI using the correct formula: BMI = weight (kg) / (height (m) ^ 2)
        bmi = kg / ((cm / 100) * (cm / 100));  

        // Print BMI with two decimal places
        printf("Your BMI is: %.2f\n", bmi);  

        // Determine BMI category
        if (bmi < 18.5) {
            printf("You are underweight\n");  
        } 
        // Incorrect use of ',' instead of '&&' for conditions
        else if (bmi >= 18.5 && bmi < 23) {
            printf("You are normal\n");  
        } 
        else if (bmi >= 23 && bmi < 25) {
            printf("You are overweight\n");  
        } 
        else if (bmi >= 25) {  // Fixed condition (previously bmi > 25, should be bmi >= 25)
            printf("You are obese\n");  
        }
    }

    return 0;
}
