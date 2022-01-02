#include<stdio.h>
void main(){
    int ar[2][3];
    printf("Enter the numbers:");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Output:");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d",ar[i][j]);
        }
    }

}