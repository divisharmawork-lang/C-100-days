Write a program to check if a number is a palindrome.

 #include <stdio.h>

int main() {
    int n, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
