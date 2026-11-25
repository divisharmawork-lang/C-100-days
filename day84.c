Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

  
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    int choice;

    printf("Enter status (0-Success, 1-Failure, 2-Timeout): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case SUCCESS:
            printf("Operation Successful");
            break;

        case FAILURE:
            printf("Operation Failed");
            break;

        case TIMEOUT:
            printf("Operation Timed Out");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
