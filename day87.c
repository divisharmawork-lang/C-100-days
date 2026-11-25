Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    int choice;

    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;

        default:
            printf("Invalid Role");
    }

    return 0;
}
