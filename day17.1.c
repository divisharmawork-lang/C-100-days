Write a program to check if a number is an Armstrong number.

  #include <stdio.h>

int main() {
    int n, original, temp, digit, digits = 0;
    int sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
