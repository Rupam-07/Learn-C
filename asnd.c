#include<stdio.h>

void acnd(int ary[]){
        int i;
    for(i=0;i<5;i++){
        if(ary[i]>ary[i+1]){
            printf("Not Accendig");
            return;
        }
    }
    printf("Accending");
}
void main(){
    int ary[5];
    printf("Enter 5 numbers: ");
    for(int i=0;i<5;i++)
        scanf("%d",&ary[i]);

    acnd(ary);
}