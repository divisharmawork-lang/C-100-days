Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int number, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
