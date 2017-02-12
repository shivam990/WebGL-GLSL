#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int i=1;
struct node
{
	int data;
	struct node *next;
}*start=NULL;
void creat()
{
	char ch;
	do{
		struct node *newnode,*current;
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter data: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start==NULL)
		{
			start=newnode;
			current=newnode;
		}
		else
		{
			current->next=newnode;
			current=newnode;
		}
		printf("\ndo you want to create another: ");
		ch=getch();
	}while(ch!='n');
}
void display()
{
	struct node *newnode;
	printf("\nthe linked list is:");
	newnode=start;
	while(newnode!=NULL)
	{
		printf("%d-->",newnode->data);
		newnode=newnode->next;
	}
	printf("NULL");
}
int main(){
	creat();
	display();
}



