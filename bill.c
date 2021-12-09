#include<stdio.h>
void main()
{
    int unit,rs;
    printf("Enter Your Unit : ");
    scanf("%d",&unit);
    if(unit<=50)
    {
        rs=unit*50;        
    }
    else if(unit>50 && unit<=150)
    {
        rs=unit*75;        
    }
    else if(unit>150 && unit<=350)
    {
        rs=unit*120;        
    }
    else if(unit>350 && unit<=500)
    {
        rs=unit*150;        
    }
    else{
        printf("Itna bijli ka bill tera bap bharega");
    }
    rs=rs+((rs*20)/100);
    printf("Your Bill is : %d",rs);
}