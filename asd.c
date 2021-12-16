#include<stdio.h>

void acnd(int ary[]){

        
    for(int i=1;i<5;i++){
        if(ary[i-1]>ary[i]){ 
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