#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int i=2;
struct node
{
	int data;
	char name[100];
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
void insert(int k)
{
	struct node *temp1,*temp2,*temp3;
	temp3=(struct node *)malloc(sizeof(struct node));
	printf("enter content of new node: ");
	scanf("%d",&temp3->data);
	temp1=start;
	while(temp1!=NULL){
		temp2=temp1->next;
		if(k==1){
			start=temp3;
			temp3->next=temp1;
			break;
		}
		if(i==k){
			temp3->next=temp2;
			temp1->next=temp3;
			break;
		}
		temp1=temp2;
		i++;
	}
}
int main(){
int n;
	creat();
	display();
	printf("\nat which position you want to insert: ");
	scanf("%d",&n);
	insert(n);
	display();
}



