#include<stdio.h>
void main(){
    int a,num1,num2,ans;
    printf("press 1 to add two numbers or press 2 to sub two numbers :");
    scanf("%d",&a);
    if(a==1){
        printf("Enter the 1st number :");
        scanf("%d",&num1);
        printf("Enter the 2nd number :");
        scanf("%d",&num2);
        ans=num1+num2;
        printf("The ans is =%d",ans);
        }
    else if(a==2){
        printf("Enter the 1st number:");
        scanf("%d",&num1);
        printf("Enter the 2nd number:");
        scanf("%d",&num2);
        ans=num1-num2;
        printf("The ans is =%d",ans);
        }
    else{
        printf("Wrong input !! Press 1 or 2");
    }

}