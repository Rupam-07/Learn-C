#include<stdio.h>

void fact(int n){
    if(n<0){
        printf("Invalid Input"); 
        return;   
    }
    

    int fact=1;       
    for (int i = n;i>=1;i--){ 
            fact=fact*i; 
    }
    printf("The factorail of %d is : %d",n,fact);
    
    
}

void main(){
    int n;
    printf("Enter the number to find it's factorial:");
    scanf("%d",&n);
    fact(n);
}
