Write a program to swap the first and last digit of a number.

  #include <stdio.h>

int main() {
    int n, first, last, middle, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n / divisor >= 10)
        divisor = divisor * 10;

    first = n / divisor;
    last = n % 10;
    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
