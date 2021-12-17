#include<stdio.h>
void main(){
    char line[30],a;
    int count=0,ln;
    printf("write The line : ");
    for(int i=0;i<30;i++){
        scanf("%c",&line[i]);
        if(line[i]=='\n'){
            ln=i;
            break;
        }
        
    }
    printf("Enter The Alphabet : ");
        scanf("%c",&a);
    for(int i=0;i<ln;i++){
        if(line[i]==a){
            count++;
        }
    }
    printf("The Frwquency of a is : %d \n",count);

   
    
}