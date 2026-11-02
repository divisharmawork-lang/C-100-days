Find the digit that occurs the most times in an integer number.

  #include <stdio.h>

int main()
{
    int n, d, i, max = 0, digit = 0;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        d = n % 10;
        count[d]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            digit = i;
        }
    }

    printf("Most repeated digit = %d", digit);

    return 0;
}
