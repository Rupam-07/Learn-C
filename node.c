#include<stdlib.h>
#include<stdio.h>
typedef struct dlinklist
{
    int n;
    struct dlinklist *next,*prev;
}node;
node *head='\0';
void menu()
{
    printf("\t\t\tprogram on doublelinklist\n");
    printf("\t\t\t 1.create\n");
    printf("\t\t\t 2.display\n");
    printf("\t\t\t 3.search\n");
    printf("\t\t\t 4.count\n");
    printf("\t\t\t 5.destroy\n");
    printf("\t\t\t 6.end of program\n");
    printf("enter your choice\n");

}
void destroy()
{
    char a;
    node *p;
    if(head=='\0')
    {
        printf("list is already created do u add more node?\n");
        a=getchar();
        fflush(stdin);
        if(a=='n'||a=='N')
            return;
        while(head!='\0')
        {
            p=head->next;
            free(head);
            head=p;
        }
    }
    printf("successfully destroyed\n");
}
void create()
{
    int x;
    char a,b;
    node *t,*h;
    if(head !='\0')
    {
        printf("list is already created\n");
        b=getchar();
        fflush(stdin);
        if(b=='n'|| b=='N')
            return;
        else
        {
            destroy();
        }
        do
        {

        printf("enter the value\n");
        scanf("%d",&x);
        t=(node*)malloc(sizeof(node));
        t->n=x;
        t->next=NULL;
        if(head=='\0')
        {
            head=t;
            t->prev='\0';
            h=t;
        }
        else
        {
            h->next=t;
            t->prev=h;
            h=t;
        }
        printf("do u add more node??\n");
        a=getchar();
        fflush(stdin);
    }
    while(a=='y'|| a=='Y');
}
void display()
{
    node *h=head;
    if(head=='\0')
    {
        printf("list is empty\n");
        return;
    }
    printf("the elements\n");
    while(h!='\0')
    {
        printf("%d\n",h->n);
        h=h->next;
    }
}
node* search(int x)
{
    node *h;
    while(h!='\0')
    {
        if(h->n==x)
        return h;
        h=h->next;
    }
    return NULL;
}
int count()
{
    int c=0;
    node *p=head;
    while(p!='\0')
    {
        c++;
        p=p->next;
    }
    return c;
}
int main()
{
    int ch,x;
    node *p;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("enter the value to be search\n");
            scanf("%d",&x);
            p=search(x);
            if(p=='\0')
                printf("value is not found\n");
            else
                printf("value is found\n");
            break;
        case 4:
            x=count();
            printf("no of node is:%d\n",x);
            break;
        case 5:
            destroy();
            break;
        case 6:
            exit(0);
        default:
           {
               printf("wrong choice");
            }
        }
    }
}
}
