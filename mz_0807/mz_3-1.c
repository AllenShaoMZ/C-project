#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("are you worth your weight in platinum?\n");
    printf("let's check it out.\n");
    printf("please enter your weight in pounts:");

    scanf("%f", &weight);

    value = 1700.0 * weight *14.5833;

    printf("your weight in platinum is worth $%2f.\n",value);
    printf("you are easily worth that! if platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    getchar();
    getchar();

    return 0;

}