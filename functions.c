#include<stdio.h>
void main()
{
  int a,b,ans;
  printf("enter two number to add ");
  scanf("%d%d",&a,&b);
  ans=add(a,b);
  printf("the ans is =%d",ans);
  printf("The sub :");
  sub(a,b);
  sub(a,b);
  
  
}

int add(int num1,int num2){
    int ans;
    ans=num1+num2;
    return ans;
  
}

void sub(int num1,int num2){
    int ans;
    ans=num1-num2;
  printf("The 2nd ans = %d",ans);
}
