#include<stdio.h>
void main()
{
    char fst[10],last[10],fname[20];
    int fstln,lstln;

    for(int i=0;i<10;i++){
        scanf("%c",&fst[i]);
        if(fst[i]=='\n'){
        fstln=i;
        break;
        }        
    }

    for(int i=0;i<10;i++){
        scanf("%c",&last[i]);
        if(last[i]=='\n'){
        lstln=i;
        break;
        }
    }
    
    int end =fstln+lstln+1;

    for(int i=0;i<=fstln;i++){
        fname[i]=fst[i];
    }
    
    for(int i=fstln,j=0;i<=end;i++,j++){
        fname[i]=last[j];         
    }
    
    for(int i=0;i<end;i++){
        printf("%c",fname[i]);
    }    
}
