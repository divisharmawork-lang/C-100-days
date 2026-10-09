Write a program to input three numbers and find the largest among them using if–else.

  #include <stdio.h>

int main(void) {
    int first, second, third;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &first, &second, &third);

    if (first >= second && first >= third) {
        printf("%d is the largest.\n", first);
    } else if (second >= first && second >= third) {
        printf("%d is the largest.\n", second);
    } else {
        printf("%d is the largest.\n", third);
    }

    return 0;
}
