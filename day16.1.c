Write a program to take a number as input and print its equivalent binary representation.

  #include <stdio.h>

void printBinary(int number) {
    if (number > 1)
        printBinary(number / 2);

    printf("%d", number % 2);
}

int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0)
        printf("Please enter a non-negative number.\n");
    else {
        printf("Binary representation = ");
        printBinary(number);
        printf("\n");
    }

    return 0;
}
