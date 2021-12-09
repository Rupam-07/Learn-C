#include<stdio.h>
void main(){
    int a,num1,num2,ans;
    printf("Press 1 to add , press 2 to sub, press 3 to multi, press 4 to dev press 5 to remainder");
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
    else if(a==3){
        printf("Enter the 1st number:");
        scanf("%d",&num1);
        printf("Enter the 2nd number:");
        scanf("%d",&num2);
        ans=num1*num2;
        printf("The ans is =%d",ans);
        }
    else if(a==4){
        printf("Enter the 1st number:");
        scanf("%d",&num1);
        printf("Enter the 2nd number:");
        scanf("%d",&num2);
        ans=num1/num2;
        printf("The ans is =%d",ans);
        }
     else if(a==5){
        printf("Enter the 1st number:");
        scanf("%d",&num1);
        printf("Enter the 2nd number:");
        scanf("%d",&num2);
        ans=num1%num2;
        printf("The ans is =%d",ans);
        }
    else{
        printf("Wrong input !! Press 1 or 2 or 3 or 4 or 5");
    }

printf("\n_____________End__________");


}