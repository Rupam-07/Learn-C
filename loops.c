#include<stdio.h>
void main(){
    int a,i; 
    printf("Enter the number to get the table:");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {    
             
        if (i%2==0) 
        {
            printf("%d is even \t",i);
        }
        else
        {
            printf("%d is odd \t",i);
        }
        
    }    
}



