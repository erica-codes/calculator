// CALCULATOR by eca 

#include <stdio.h>

int main(){
    float num1, num2, add, sub, product, quotient;
    int choice;

    // GATHER INPUTS
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Enter your choice (1-4):\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n#");
    scanf("%d", &choice);

    // CALCULATION
    add = num1 + num2;
    sub = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    // OUTPUT
    switch(choice) {
        case 1:
            printf("Sum: %.2f\n", add);
            break;
        case 2:
            printf("Difference: %.2f\n", sub);
            break;
        case 3:
            printf("Product: %.2f\n", product);
            break;
        case 4:
            if (num2 != 0){
                printf("Quotient: %.2f\n", quotient);
            } else {
                printf("Divisor should not be equal to zero; Otherwise, undefined.");
            }
                break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
    return 0;
}