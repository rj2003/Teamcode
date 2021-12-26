#include<stdlib.h>
#include<stdio.h>
#define MAX 3
void push();
void pop();
void display();
struct node
{
    int info;
    struct node*link;
}
*top=0;
void main()
{
    int choice;
    while(1)
    {
        printf("\n1.Insertion\n2.Deletion\n3.Display");
        printf("\nEnter you choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            push();
            break;
            }
            case 2:
            {
            pop();
            break;
            }
            case 3:
            {
                display();
                break;
            }
        }
        
    }
}
void push()
{
    struct node*tmp;
    int ele;
    tmp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter element to push:");
    scanf("%d",&ele);
    tmp->info=ele;
    tmp->link=top;
}
void pop()
{
    struct node*tmp;
    if(*top=0)
    {
        printf("\nStack Underflow.");
    }
    else
    {
        tmp=top;
        printf("\nThe popped element is %d",top->info);
        top=top->link;
    }
    free(tmp);
}
void display()
{
    struct node*tmp;
    ptr=top;
    if(top==0)
    {
        printf("\nThe stack is empty.");
    }
    else
    {
        printf("\nThe stack elements are:");
        while(ptr->link!=0)
        {
            printf("%d",ptr->info);
            ptr=ptr->link;
        }
    }
}