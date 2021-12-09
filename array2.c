#include<stdio.h>
void main()
{
    char name[50];
    int a,spc;

    
    printf("Enter Your Name :");
    for(int i=0;i<50;i++){
        scanf("%c",&name[i]);
        if(name[i]=='\n')       //length
        break;
         a=i;
         
    }

    for(int i=0;i<a;i++){
        if (name[i]==' ')            
        break;
        spc=i;        
    }
    printf("%c.",name[0]); 
    
    
      //R. 7 
    for (int i = spc+1; i <=a; i++)
    {
        printf("%c",name[i]);
    }
    

}

//Rupam karmakar   
//R. karmakar
// hint to check space in name  Rupam karmakar name[0]
//R. karmakar
//printf("%c.",name[0]); //R. 
//name[50]
//Rupam a=5

// a[6];
// 1 2 34 5 4 7
// 1 2 4 5 7 34

// a[6];
// 1 2 3 4 5 6
// b[3]
// 135
// c[3]
// 246

// finding characters in array.