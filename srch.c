#include <stdio.h>
void main()
{
    int array[5], elmnt;
    printf("Enter Your 5 value : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("enter the element : "); 
    scanf("%d", &elmnt);
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == elmnt)
        {
            printf("%d", i + 1);
        }
    }
}