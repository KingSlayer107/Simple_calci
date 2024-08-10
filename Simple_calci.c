#include <stdio.h>
#include <math.h>

int main() {

    char operator;
    double num1, num2, result;

    printf("If using power function then 2nd num is the power\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);  // Correct format specifier

    printf("Enter the second number: ");
    scanf("%lf", &num2);  // Correct format specifier

    printf("Enter the operation (+, -, *, /,^): ");
    scanf(" %c", &operator);  // Space before %c to consume any leftover newline character

    switch (operator) {
        case '+': //addition
            result = num1 + num2; 
            break;
        case '-':  //subtraction
            result = num1 - num2;
            break;
        case '*':  //multiplication
            result = num1 * num2;
            break;
        case'^':  //power
            result = pow(num1,num2);
            break;
        case '/':  //division
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  // Exit the program with an error code
    }

    printf("Result: %lf\n", result);  // Correct format specifier for printing the result

    return 0;
}
