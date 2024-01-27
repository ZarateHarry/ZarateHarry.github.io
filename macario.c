
#include <stdio.h>

int main(void)
{
    printf("Calculates the Area of the Rectangle\n");

     float length, width, perimeter;

     printf("input the length of the rectangle\n");
     scanf("%2f",&length);

     printf("input the width of the rectangle\n");
     scanf("%2f",&width);

     float area;
     area= length * width;

     printf("The area of the rectangle is %f\n", area);

     return(0);
}

