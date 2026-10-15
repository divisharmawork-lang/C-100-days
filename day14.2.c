Write a program to print the product of even numbers from 1 to n.

  #include <stdio.h>

int productEven(int n) {
    if (n < 2)
        return 1;

    if (n % 2 != 0)
        n--;

    return n * productEven(n - 2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Product = %d\n", productEven(n));

    return 0;
}
