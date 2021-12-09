#include<stdio.h>
void main(){
    int a,b,ans,pro;
    printf("Enter  two numbers to add:");
    scanf("%d%d",&a,&b);
    ans=add(a,b);
    pro=ans-300;
    printf(" The ans is =%d",ans);
}
int add(int n1,int n2){
    int ans;
    ans=n1+n2; 
    return ans;
}