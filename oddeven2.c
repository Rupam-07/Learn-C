#include<stdio.h>
void main(){
    int num[6],odd[6],even[6];
    int odds=0,evns=0;
    printf("Enter 6 numbers to sort");
    for (int i=0;i<6;i++){
        scanf("%d",&num[i]); // 1 2 3 4 5 6
    }
    for(int i=0;i<6;i++){ // 0 1 2 
        if (num[i]%2==0)
        {
            even[evns]=num[i]; //even[0]=2,
            evns++; // 1 
        }
        else{
            odd[odds]=num[i];  //odd[0]=1; odd[1]=3 
            odds++; // 1 2 
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