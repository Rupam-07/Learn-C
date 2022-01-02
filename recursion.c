#include<stdio.h>
void main()
{   
    int n;
    scanf("%d",&n);
    print(n);
}

int print(int n){
    
    if(n==0){
        return n;
    }
    else{
        printf("%d",n);
        print(n-1);
    }
}