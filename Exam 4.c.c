#include <stdio.h>

int main()
{
    int Add,Sub,Multiply,Division,Number1,Number2;\

    printf("Enter the first number: ");
    scanf("%d",&Number1);
    printf("Enter the second number: ");
    scanf("%d",&Number2);

    Add =      Number1 + Number2;
    Sub =      Number1 - Number2;
    Multiply = Number1 * Number2;
    Division = Number1 / Number2;

    printf("\n\n\n");
    printf("Sum        =%d\n", Add);
    printf("Difference =%d\n",    Sub);
    printf("Product    =%d\n", Multiply);
    printf("Qourient   =%d\n",    Division);

    return 0;
}
