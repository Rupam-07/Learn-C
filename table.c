#include<stdio.h>
void main()
{
    int a,i,j;
    printf("Enter the range:");//4
    scanf("%d",&a); //1 2 3 4
    for(i=1;i<=a;i++){

        for(j=1;j<=10;j++){

            printf("%d X %d =%d \n",i,j,i*j);
        
        }
    }
}

