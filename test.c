#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number"); 
    scanf("%d",&b);


    if(a==b){
        printf("this is true");
        printf("a > b");
    }
    else {
        printf("this is false");
        printf("a < b");
    }
}