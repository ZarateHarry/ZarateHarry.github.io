#include <stdio.h>
#include <math.h>

int main()
{
    float AREA, RADIUS,CIRCUM,DIAMETER;

    printf("Enter the RADIUS: ");
    scanf("%f", &RADIUS);

    AREA = M_PI * (RADIUS * RADIUS);
    CIRCUM = 2 * M_PI * RADIUS;
    DIAMETER = RADIUS * 2;

    printf("\nThe Area is: %f.2\n", AREA);
    printf("The Circumference is: %f.2\n", CIRCUM);
    printf("The Diameter is: %f.2\n", DIAMETER);

    return 0;

}
