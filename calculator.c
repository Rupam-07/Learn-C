#include<stdio.h>
void main(){
    int a,num1,num2,ans;

    printf("press 1 to add two numbers or press 2 to sub two numbers");
    scanf("%d",&a);
    printf("Enter the 1st number");
        scanf("%d",&num1);
        printf("Enter the 2nd number");
        scanf("%d",&num2);

    if(a==1){
        ans=num1+num2;
        printf("The ans is =%d",ans);
        }
    else{                              // Press 1 to add , press 2 to sub, press 3 to multi, press 4 to dev
        ans=num1-num2;
        printf("The ans is =%d",ans);
        }

        
    if (a==3)
    {
        ans=num1*num2;
        printf("The ans =%d",ans);
    }
    else{
        ans=num1/num2;
        printf("The ans =%d",ans);
    }
    

}

