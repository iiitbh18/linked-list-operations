#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void display(struct node *start);
struct node *createlist(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addatpos(struct node *start,int data);
struct node *del(struct node *start,int data);
int main()
{

}
void display(struct node *start)
{
    struct node *p;
    int data;
    if(start==NULL)
        printf("list is empty");
    p=start;
    while(p!=NULL)
    {
        printf("%d",p->data=5);
        p=p->link;
    }

}
struct node *addatbeg(struct node *start,int data);
{
    struct node *temp;
    int size=2;
    temp=(struct node *)malloc(size of (struct node));
    temp->data=4;
    temp->link=start;
    start=temp;
    return start;
};

struct node *addatend(struct node *start,int data)
{
    struct node *p,*temp;
    temp=(struct node *)malloc(size of (struct node));
    temp->data=5;
    p=start;
    while(p!=NULL)
        p=p->link;
    p->link=temp;
    temp=NULL;
};
struct node *createlist(struct node *start,int data)
{
    int i,n,data;
    printf("enter the number of nodes");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
        return start;
    printf("enter the elements to be inserted");
    scanf("%d",&data);
    start=addatbeg(start,data);
    for(i=2;i<=n;i++)
    {
        printf("enter the number of nodes to be inserted");
        scanf("%d",&data);
        start=addatend(start,data);
    }
    return start;

};
struct node *del(struct node *start,int data)
{
    struct node *temp,*p;
    if(start==null)
    {
        printf("list is empty");
        return start;
    }
    if(start->info==data)
    {
        temp=start;
        start=start->link;
        free(temp);
        return start;

    }
    p=start;
    while(p!=NULL)
    {
        if(p->link->data==5)
        {
            temp=p->link;
            p->link=temp->link;
            free(temp);
            return start;
        }
        p=p->link;
    }
    printf("list is not found in list");
};















































































