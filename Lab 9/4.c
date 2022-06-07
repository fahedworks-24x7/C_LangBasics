#include<stdio.h>
#include<stdlib.h>
typedef struct node
	{
    	int data;
    	struct node * next;
	}node;

node * createLinkedList(int n)
{
    int t=n;
    node * head=NULL;
    node * x=NULL;
    node * p=NULL;
    for(t=n;t>0;t--)
    {
        x=(node*)malloc(sizeof(node));
        scanf("%d",&(x->data));
        x->next = NULL;
        if(head==NULL)
        {
            head=x;
        }
        else
        {
            p=head;
            while(p->next!=NULL)
                p=p->next;
            p->next = x;
        }
    }
        return head;
}

void removeOdd(node *head)
{
    node * p=head;
    while(p !=NULL)
    {
        if((p->data)%2==0)
        {
            printf("%d-->",p->data);
	    printf("\n");
            p=p->next;
        }
        else
        {
            p=p->next;
        }
    }
    printf("NULL");
}

void ShowList(node * head)
{
    node * p=head;
    while(p !=NULL)
    {
        printf("%d-->",p->data);
        p=p->next;
    }
    printf("NULL");
}

int main()
	{
	int n=0;
	node *HEAD = NULL;
	scanf("%d",&n);
	HEAD=createLinkedList(n);
	ShowList(HEAD);
	printf("\n");
	removeOdd(HEAD);
	return 0;
	} 



