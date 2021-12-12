#include <stdio.h>
void main()
{
    int num[10];
    printf("Enter Ten Numbers : ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    printf("Maximum Value is : %d\n", maximum(num));
    printf("minimum value is : %d",minimum(num));
}
int maximum(int num[])
{
    int max=num[0];
    for (int i=0;i<10;i++) {
        if (num[i] > max){
            max = num[i];
        }
    }
    return max;
}
int minimum(int num[])
{
    int min=num[0];
    for(int i=0;i<10;i++){
        if(num[i]<min){  //num[0] 10 num[1] 9 num[2] 11 num[3] 8 num[4] 10 num[5] 5
            min=num[i]; //10 9 8 5 
        }
    }
    return min;
}

