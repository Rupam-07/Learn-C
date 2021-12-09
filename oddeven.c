#include<stdio.h>
void main(){
    int num[6];
    printf("Enter 6 numbers to sort");
    for (int i=0;i<6;i++){
        scanf("%d",&num[i]);
    }
    printf("The even numbers are:");
    for(int i=0;i<6;i++){
        if (num[i]%2==0)
        {
            printf("%d",num[i]);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    printf("The odd numbers are:");
    for(int i=0;i<6;i++){
        if (num[i]%2!=0)
        {
            printf("%d",num[i]);
        }
        else{
            printf(" ");
        }
    }
    
}
