#include <stdio.h>

int main(void)
{
    char dishName[20];
    printf("What is the name of this dish: ");
    scanf("%s", dishName);
    printf("Dish name is %s\n", dishName);
    return 0;
}
