Write a program to print the sum of the first n odd numbers.

  #include <stdio.h>

int sumOddNumbers(int n) {
    if (n == 0) {
        return 0;
    }

    return (2 * n - 1) + sumOddNumbers(n - 1);
}

int main(void) {
    int n, sum;

    printf("Enter the value of n: ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    sum = sumOddNumbers(n);

    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
