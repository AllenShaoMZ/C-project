#include <stdio.h>
#include <string.h> //提供strlen（）函数的原型

#define DENSITY 62.4 //人体密度

int main()
{
    float weight, volume;
    int size,letters;
    char name[40]; //name是一个可容纳40个字符的数组

    printf("Hi!What's your first name? \n");
    scanf("%s",name);
    printf("%s ,What's your weight in pounds? \n",name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume =  weight / DENSITY;
    printf("well,%s,your volume is %2.2fcubic feet.\n",name,volume);
    printf("also,your first name has %d letters,\n",letters);
    printf("and we have %d bytes to store it.\n",size);
    
    return 0;
}