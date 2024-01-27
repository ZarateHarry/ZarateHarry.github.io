// Activity 3
#include <stdio.h>

int main ( void )
// Make an checkerboard pattern statement by 8 printf statement
{
    printf("* * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf("* * * * * * * *\n");

    printf("\n");

    // Display the same pattern with fewer printf statements
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

