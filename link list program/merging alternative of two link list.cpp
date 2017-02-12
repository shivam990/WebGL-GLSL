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
	struct node*newnode,*current,*temp1,*temp2;
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
	
	printf("\nsecond list: ");
	char ch1;
	struct node*head=NULL;
	do{
		
	temp1=(struct node *)malloc(sizeof(struct node));
		printf("enter data: ");
		scanf("%d",&temp1->data);
		temp1->next=NULL;
		if(head==NULL)
		{
			head=temp1;
			temp2=temp1;
		}
		else
		{
			temp2->next=temp1;
			temp2=temp1;
		}
		printf("\ndo you want to create another: ");
		ch1=getch();
	}while(ch1!='n');
	
	newnode=start;
	temp1=head;
	while(temp1!=NULL&&current!=NULL){
		current=newnode->next;
		temp2=temp1->next;
		newnode->next=temp1;
		if(current==NULL){
			temp1->next=temp2;
			break;
		}
		temp1->next=current;
		newnode=current;
		temp1=temp2;
	}
	
	newnode=start;
	while(newnode!=NULL){
	printf("%d\t",newnode->data);
	newnode=newnode->next;
}
}
int main(){
	creat();
}



