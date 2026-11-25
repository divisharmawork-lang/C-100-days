Create an enum for months and print how many days each month has.

  
#include <stdio.h>

enum Months {
    JANUARY = 1, FEBRUARY, MARCH, APRIL,
    MAY, JUNE, JULY, AUGUST,
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main()
{
    int i;

    for(i = JANUARY; i <= DECEMBER; i++)
    {
        switch(i)
        {
            case FEBRUARY:
                printf("February = 28 days\n");
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("Month %d = 30 days\n", i);
                break;

            default:
                printf("Month %d = 31 days\n", i);
        }
    }

    return 0;
}
