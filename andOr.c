#include<stdio.h>
void main(){
    int a;
    printf("Enter a number to check its between 50 to 60:");
    scanf("%d",&a);
    if (a>=50 || a<=60){
        printf("it's between");
    }
    else {
        printf("it's not");
    }

}


