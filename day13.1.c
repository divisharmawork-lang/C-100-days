Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

  #include <stdio.h>

int main(void) {
    int number1, number2;
    char operator;

    printf("Enter an expression (example: 10 + 5): ");
    scanf("%d %c %d", &number1, &operator, &number2);

    switch (operator) {
        case '+':
            printf("Result = %d\n", number1 + number2);
            break;

        case '-':
            printf("Result = %d\n", number1 - number2);
            break;

        case '*':
            printf("Result = %d\n", number1 * number2);
            break;

        case '/':
            if (number2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("Result = %.2f\n",
                       (float)number1 / number2);
            }
            break;

        case '%':
            if (number2 == 0) {
                printf("Modulo by zero is not allowed.\n");
            } else {
                printf("Result = %d\n", number1 % number2);
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
