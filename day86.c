Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

  
#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case ADD:
            printf("Sum = %d", a + b);
            break;

        case SUBTRACT:
            printf("Difference = %d", a - b);
            break;

        case MULTIPLY:
            printf("Product = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
