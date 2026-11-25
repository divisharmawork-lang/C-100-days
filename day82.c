Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

  
#include <stdio.h>

enum Traffic {
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum Traffic light;

    printf("Enter traffic light (0-Red, 1-Yellow, 2-Green): ");
    scanf("%d", (int *)&light);

    switch(light)
    {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
