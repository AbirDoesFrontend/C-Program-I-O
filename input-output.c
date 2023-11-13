#include <stdio.h>

int main()
{

    int num1;
    float num2;
    double num3;
    char name;

    printf("Enter Integer Number : " );
    scanf("%d", &num1);

    printf("Enter Float : ");
    scanf("%f", &num2);

    printf("Enter Double : ");
    scanf("%lf" , &num3);

    printf("Enter Character : ");
    scanf(" %c" , &name);

    printf("Integer : %d\n" , num1);
    printf("Float : %f\n" , num2);
    printf("Double : %lf\n"  , num3);
    printf("Character : %d" , name);

    return 0;
}
