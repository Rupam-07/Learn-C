
#include <stdio.h>


int main()
{
	int x,a,b;
    printf("Enter your choice");
    scanf("%d",&x);
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
	switch (x) {
	case 1:
		printf("Ans is %d",a+b);        
		break;
	case 2:
		printf("Ans is %d",a-b);
		break;
	case 3:
		printf("Ans is %d",a*b);
		break;
	default:
		printf("Ans is %d",a/b);
		break;
	}
	return 0;

}
