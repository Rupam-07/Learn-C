#include<stdio.h>
void main(){
    int num[6],odd[6],even[6];
    int odds=0,evns=0;
    printf("Enter 6 numbers to sort");
    for (int i=0;i<6;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<6;i++){ 
        if (num[i]%2==0)
        {
            even[evns]=num[i]; 
            evns++; 
        }
        else{
            odd[odds]=num[i]; 
            odds++;
        }
    }
    
    printf("The even numbers are:");
        for (int i = 0; i <evns ; i++)
        {
            printf("%d",even[i]);
        }
    printf("\n");
    printf("The odd numbers are:");
        for (int i = 0; i < odds; i++)
        {
            printf("%d",odd[i]);
        }
        
}