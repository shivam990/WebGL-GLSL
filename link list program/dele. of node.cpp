#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int i=1;
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
void delet(int k)
{
	struct node*temp1,*temp2;
	temp1=start;
	while(temp1!=NULL){
		temp2=temp1->next;
		if(i==k-1){
			temp1->next=temp2->next;
				free(temp2);
			break;
		}
		if(k==1){          //see through graphical form of link list,it works.
			start=temp2;
				free(temp1);
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
	printf("\nenter the node which u want to delete: ");
	scanf("%d",&n);
	delet(n);
	display();
	getch();
}



